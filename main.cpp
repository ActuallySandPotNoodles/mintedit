// ｍｉｎｔｅｄｉｔ
// Made by SandPotNoodles in C++

/*
	while on holiday (i miss my friend group a lot 😭)
	was gonna list them to show dedication or somthing but that's an invasion of privacy
								    something you can sue over btw ^^^ - but brent won't sue my over it
even if it's just first names and that */

#include "window.h"
#include <QApplication>
#include <QMainWindow>
#include <string>
#include <fstream>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <iostream>
#include <subprocess.hpp>
#include <filesystem>
#include <QErrorMessage>
#include <QFileInfo>
using namespace std;

string version = "1.0.0";
string replace_all(string str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Move past the replaced text
    }
    return str;
}
vector<string_view> split(string_view str, string_view delimiter) {
    vector<string_view> tokens;
    size_t start = 0;
    size_t end = str.find(delimiter);
    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimiter.length();
        end = str.find(delimiter, start);
    }
    tokens.push_back(str.substr(start));
    return tokens;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow() {
        QWidget *centralWidget = new QWidget(this);
        if (home_env != nullptr) {
            wherets = string(home_env) + "/.cache/mintedit-lastloc";
        }
        if (not filesystem::exists(string(home_env) + "/.sand-platform")) {
            int reply = QMessageBox::warning(this, "Save Changes?",
                                             "Are you on mobile\nNote that you can change this at any time\nby changing the value in ~/.sand-setplat",
                                             QMessageBox::Yes | QMessageBox::No);
            bool use_mobile = (reply == QMessageBox::Yes);
            ofstream outfile(string(home_env) + "/.sand-platform");
            if (outfile.is_open()) {
                int use_mobile_int = use_mobile ? 1 : 0;
                outfile << use_mobile_int;
                outfile.close();
            }
        }
        use_mobile = checkMobilePlatform(home_env);
        cout << "last recent file stored in: " << wherets << endl;
        ui.setupUi(centralWidget);
        if (use_mobile) {
            ui.togglehtml->setText("Show HTML/Markdown View");
            ui.infobutton->hide();
            ui.fname->hide();
            ui.horizontalSpacer_2->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
            ui.horizontalSpacer_2->invalidate();
            ui.gridLayout->layout()->activate();
            cout << "Using Mobile UI" << endl;
        } else {
            ui.docname_mobile->hide();
            ui.mspace->changeSize(0,0, QSizePolicy::Fixed, QSizePolicy::Fixed);
            ui.mspace->invalidate();
            ui.gridLayout->layout()->activate();
        }
        QObject::connect(ui.togglehtml, &QPushButton::clicked, this, &MainWindow::setview_md);
        QObject::connect(ui.exit_mdv, &QPushButton::clicked, this, &MainWindow::setview_main);
        QObject::connect(ui.text, &QPlainTextEdit::textChanged, this, &MainWindow::edit_event);
        QObject::connect(ui.open, &QPushButton::clicked, this, &MainWindow::open_file);
        QObject::connect(ui.new_2, &QPushButton::clicked, this, &MainWindow::new_file);
        QObject::connect(ui.save, &QPushButton::clicked, this, &MainWindow::save_func);
        QObject::connect(ui.saveas, &QPushButton::clicked, this, &MainWindow::save_as_func);
        QObject::connect(ui.reload_btn, &QPushButton::clicked, this, &MainWindow::reload_btn_func);
        QObject::connect(ui.loc_btn, &QPushButton::clicked, this, &MainWindow::open_dir_func);
        QObject::connect(ui.replace_btn, &QPushButton::clicked, this, &MainWindow::replace_btn_func);
        QObject::connect(ui.recent, &QPushButton::clicked, this, &MainWindow::recent_btn_func);
        QObject::connect(ui.comboBox, &QComboBox::currentTextChanged, this, &MainWindow::change_showing_md);
        QObject::connect(ui.infobutton, &QPushButton::clicked, this, &MainWindow::showVersion);
        QObject::connect(ui.info_btn, &QPushButton::clicked, this, &MainWindow::textInfoAndThat);
        setview_main();
        reset_fname();
        setCentralWidget(centralWidget);
    }
    bool checkMobilePlatform(const char* home_env) {
        string configPath = std::string(home_env) + "/.sand-platform";
        if (!std::filesystem::exists(configPath)) {
            return false;
        }
        std::ifstream infile(configPath);
        if (infile.is_open()) {
            int value = 0;
            infile >> value;
            infile.close();
            return (value == 1);
        }
        return false;
    }

    void showVersion() {
        QMessageBox msgBox(this);
        QPixmap apixmap("/usr/share/sandpotnoodles/mintedit.png");
        QPixmap pixmap = apixmap.scaled(150, 150, Qt::KeepAspectRatio, Qt::SmoothTransformation);
        msgBox.setText(QString::fromStdString("MintEdit Version "+version+"\nMade with ｌｕｃｋ by SandPotNoodles\nContributors:\nme"));
        msgBox.setIconPixmap(pixmap);
        msgBox.exec();
    }
    void textInfoAndThat() {
        QMessageBox msgBox(this);
        cdata = ui.text->toPlainText().toStdString();
        msgBox.setText(QString::fromStdString("Path: " + file + "\n" + QString::number(split(cdata, "\n").size()).toStdString() + " Lines")); // bad but not as bad as that one dev who made yandere simulator
        msgBox.exec();
    }
    void change_showing_md() {
        cout << "change_showing_md event";
        string selection = ui.comboBox->currentText().toStdString();
        if (selection == "HTML") {
            cout << "HTML" << endl;
            current_mdt = 0;
        } else {
            cout << "Markdown" << endl;
            current_mdt = 1;
        }
        edit_event();
    }
    void replace_btn_func() {
        string what, with;
        what = QInputDialog::getText(this, "Replace", "Replace what:").toStdString();
        with = QInputDialog::getText(this, "Replace", "With:").toStdString();
        if (not ((what == "") and (with == "")) or (what == "")) {
            if (not (what == with)) {
                cdata = ui.text->toPlainText().toStdString();
                ui.text->setPlainText(QString::fromStdString(replace_all(cdata, what, with)));
            }
        }
    }
    void hide_mdv() {
        ui.md_area->hide();
        ui.exit_mdv->hide();
    }
    void show_mdv() {
        ui.md_area->show();
        if (use_mobile) {
            ui.exit_mdv->show();
        }
    }
    void show_main() {
        ui.frame->show();
        ui.text->show();
        ui.togglehtml->show();
        ui.info_btn->show();
        ui.reload_btn->show();
        ui.replace_btn->show();
        ui.loc_btn->show();
        if (use_mobile) {ui.docname_mobile->show();}
    }
    void hide_main() {
        ui.frame->hide();
        ui.text->hide();
        ui.togglehtml->hide();
        ui.info_btn->hide();
        ui.reload_btn->hide();
        ui.replace_btn->hide();
        ui.loc_btn->hide();
        ui.docname_mobile->hide();
    }
    void setview_md() {
        if (use_mobile) {
            hide_main();
            show_mdv();
        } else {
            showing_md = !showing_md;
            if (not showing_md) {
                show_mdv();
            } else {
                hide_mdv();
            }
        }
    }
    void setview_main() {
        hide_mdv();
        show_main();
    }
    void reload_func() {
        cout << "Openning: " << file << endl; // debug stuff
        ifstream stream(file);
        stringstream buffer;
        buffer << stream.rdbuf();
        cdata = buffer.str();
        ui.text->setPlainText(QString::fromStdString(cdata));
    }
    // i know there's a better way to do this, but i'll pass as i don't know what that 'better way' is :)
    void edit_event() {
        unsaved_sincelast = true;
        ui.docname_mobile->setText(QString::fromStdString("*"+filename));
        ui.fname->setText(QString::fromStdString("*"+filename));
        cout << "edit_event: ";
        if (not current_mdt == 1) {
            ui.textBrowser->setMarkdown(ui.text->toPlainText());
            cout << "using Markdown" << endl;
        } else {
            ui.textBrowser->setHtml(ui.text->toPlainText()); cout << "using HTML" << endl;
        }
    }
    void setlast(string filez) {
        cout << "Called SetLast" << endl;
        ofstream outfile(wherets);
        if (outfile.is_open()) {
            outfile << filez;
            outfile.close();
        }
    }
    void open_file() {
        if (unsaved_sincelast) {if (unsaved_warning()) {save_func();}}
        fnm = QFileDialog::getOpenFileName(this, tr("Select a Markdown or HTML file"));
        if (not fnm.isEmpty()) {
            file = fnm.toStdString();
            reload_func();
            unsaved_sincelast = false;
            filename = file.substr(file.find_last_of("/\\") + 1);;
            setlast(file);
            ui.fname->setText(QString::fromStdString(filename));
            ui.docname_mobile->setText(QString::fromStdString(filename));
        }
    }
    void new_file() {
        if (unsaved_sincelast) {if (unsaved_warning()) {save_func();}}
        file = "";
        cdata = "";
        filename = "";
        unsaved_sincelast = false;
        ui.text->setPlainText(QString::fromStdString(""));
        reset_fname();
    }
    void reset_fname() {
        ui.fname->setText(QString::fromStdString(filename));
        ui.docname_mobile->setText(QString::fromStdString(filename));
    }
    void reload_btn_func() {
        if (unsaved_sincelast) {if (unsaved_warning()) {save_func();} else {reload_func();}} else {reload_func();}
        unsaved_sincelast = false;
        reload_func();
    }
    void recent_btn_func() {
        bool fpexists = filesystem::exists(wherets);
        //cout << "ok i'm here but i think that the file existing is" << fpexists << endl;
        if (fpexists) {
            ifstream strean(wherets);
            stringstream buffer;
            buffer << strean.rdbuf(); //cout << "buffer time: ";
            //cout << buffer.str() << endl;
            file = buffer.str();
            filename = file.substr(file.find_last_of("/\\") + 1);
            reload_func();
            unsaved_sincelast = false;
            reset_fname();
        } else {
            QErrorMessage *dialog = new QErrorMessage(this);
            dialog->showMessage("Failed to find last file open");
        }
    } // what <-- pointless comment saying "what" orignanlly for no reason? what?
    void save_func() {
        if (file == "") {save_as_func();} else {
            cdata = ui.text->toPlainText().toStdString();
            ofstream outfile(file);
            if (outfile.is_open()) {
                outfile << cdata;
                outfile.close();
                cout << "Saved: " << file << endl;
                unsaved_sincelast = false;
                reset_fname();
                setlast(file);
            } else {
                cerr << "fail saving file" << endl;
            }
        }
    }
    bool unsaved_warning() {
        int reply = QMessageBox::warning(this, "Save Changes?", "The file has been edited\nWould you like to save first?", QMessageBox::Yes | QMessageBox::No);
        if (reply == QMessageBox::Yes) {return true;}
        return false;
    }
    void save_as_func() {
        fnm = QFileDialog::getSaveFileName(this, tr("Select a Markdown or HTML file"));
        if (not fnm.isEmpty()) {
            file = fnm.toStdString();
            save_func();
            filename = file.substr(file.find_last_of("/\\") + 1);
            ui.fname->setText(QString::fromStdString(filename));
            ui.docname_mobile->setText(QString::fromStdString(filename));
        }
    }
    void open_dir_func() {
        size_t last_slash_idx = file.find_last_of('/');
        if (string::npos != last_slash_idx) {
            string dir_path = file.substr(0, last_slash_idx + 1);
            subprocess::call(("xdg-open " + dir_path).c_str());
        }
    }
    void initopen(const QString &path) {
        cout << path.toStdString() << endl;
        if ((filesystem::exists(path.toStdString()))) {
            file = path.toStdString();
            filename = file.substr(file.find_last_of("/\\") + 1);
            reset_fname();
            setlast(file);
            reload_func();
        } else {
            cerr << "That file doesn't exist mate" << endl;
            exit(1);
        }
    }

private:
    int current_int = 0;
    bool use_mobile = false; // don't touch this, it's pointless to touch
    bool showing_md = true; // like that so that it works first try or somthing idk, it just fixes somthing
    bool unsaved_sincelast = false;
    string file = "";
    string cdata = "";
    string filename = "New Document";
    const char* home_env = getenv("HOME");
    string wherets;
    int current_mdt = 0;
    QString fnm;
    Ui_Form ui;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MainWindow w;
    if (argc > 1) {
        QString rawPath = QString::fromLocal8Bit(argv[1]);
        QFileInfo fileInfo(rawPath);
        QString fullPath = fileInfo.absoluteFilePath();
        w.initopen(fullPath);
    }
    w.show();
    w.resize(1024,512);
    return app.exec();
}


#include "main.moc"
