/********************************************************************************
** Form generated from reading UI file 'minttextiTZaQb.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MINTTEXTITZAQB_H
#define MINTTEXTITZAQB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QGraphicsDropShadowEffect>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *reload_btn;
    QPushButton *info_btn;
    QPushButton *loc_btn;
    QPlainTextEdit *text;
    QFrame *md_area;
    QVBoxLayout *verticalLayout;
    QPushButton *exit_mdv;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *recent;
    QPushButton *new_2;
    QPushButton *saveas;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *infobutton;
    QPushButton *open;
    QLabel *fname;
    QSpacerItem *horizontalSpacer;
    QPushButton *save;
    QSpacerItem *mspace;
    QPushButton *togglehtml;
    QPushButton *replace_btn;
    QLabel *docname_mobile;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(886, 421);
        Form->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:1 rgba(85, 85, 85, 255));"));
        gridLayout_2 = new QGridLayout(Form);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        reload_btn = new QPushButton(Form);
        reload_btn->setObjectName("reload_btn");
        QFont font;
        font.setBold(false);
        reload_btn->setFont(font);
        reload_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout_2->addWidget(reload_btn, 4, 1, 1, 1);

        info_btn = new QPushButton(Form);
        info_btn->setObjectName("info_btn");
        info_btn->setFont(font);
        info_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout_2->addWidget(info_btn, 4, 0, 1, 1);

        loc_btn = new QPushButton(Form);
        loc_btn->setObjectName("loc_btn");
        loc_btn->setFont(font);
        loc_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout_2->addWidget(loc_btn, 4, 3, 1, 1);

        text = new QPlainTextEdit(Form);
        text->setObjectName("text");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Adwaita Mono")});
        font1.setPointSize(15);
        text->setFont(font1);

        gridLayout_2->addWidget(text, 2, 0, 1, 4);

        md_area = new QFrame(Form);
        md_area->setObjectName("md_area");
        md_area->setFrameShape(QFrame::Shape::StyledPanel);
        md_area->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(md_area);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        exit_mdv = new QPushButton(md_area);
        exit_mdv->setObjectName("exit_mdv");
        QFont font2;
        font2.setPointSize(17);
        font2.setBold(false);
        exit_mdv->setFont(font2);
        exit_mdv->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        verticalLayout->addWidget(exit_mdv);

        textBrowser = new QTextBrowser(md_area);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        comboBox = new QComboBox(md_area);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);


        gridLayout_2->addWidget(md_area, 0, 4, 5, 1);

        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        recent = new QPushButton(frame);
        recent->setObjectName("recent");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recent->sizePolicy().hasHeightForWidth());
        recent->setSizePolicy(sizePolicy);
        recent->setMinimumSize(QSize(48, 48));
        recent->setMaximumSize(QSize(48, 48));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpenRecent));
        recent->setIcon(icon);
        recent->setIconSize(QSize(32, 32));

        gridLayout->addWidget(recent, 0, 5, 1, 1);

        new_2 = new QPushButton(frame);
        new_2->setObjectName("new_2");
        sizePolicy.setHeightForWidth(new_2->sizePolicy().hasHeightForWidth());
        new_2->setSizePolicy(sizePolicy);
        new_2->setMinimumSize(QSize(48, 48));
        new_2->setMaximumSize(QSize(48, 48));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        new_2->setIcon(icon1);
        new_2->setIconSize(QSize(32, 32));

        gridLayout->addWidget(new_2, 0, 1, 1, 1);

        saveas = new QPushButton(frame);
        saveas->setObjectName("saveas");
        sizePolicy.setHeightForWidth(saveas->sizePolicy().hasHeightForWidth());
        saveas->setSizePolicy(sizePolicy);
        saveas->setMinimumSize(QSize(48, 48));
        saveas->setMaximumSize(QSize(48, 48));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        saveas->setIcon(icon2);
        saveas->setIconSize(QSize(32, 32));

        gridLayout->addWidget(saveas, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 8, 1, 1);

        infobutton = new QPushButton(frame);
        infobutton->setObjectName("infobutton");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Inter Display Light")});
        font3.setPointSize(23);
        font3.setWeight(QFont::DemiBold);
        font3.setItalic(true);
        infobutton->setFont(font3);
        infobutton->setFlat(true);

        gridLayout->addWidget(infobutton, 0, 9, 1, 1);

        open = new QPushButton(frame);
        open->setObjectName("open");
        sizePolicy.setHeightForWidth(open->sizePolicy().hasHeightForWidth());
        open->setSizePolicy(sizePolicy);
        open->setMinimumSize(QSize(48, 48));
        open->setMaximumSize(QSize(48, 48));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        open->setIcon(icon3);
        open->setIconSize(QSize(32, 32));

        gridLayout->addWidget(open, 0, 4, 1, 1);

        fname = new QLabel(frame);
        fname->setObjectName("fname");
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(true);
        fname->setFont(font4);
        fname->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        gridLayout->addWidget(fname, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 6, 1, 1);

        save = new QPushButton(frame);
        save->setObjectName("save");
        sizePolicy.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy);
        save->setMinimumSize(QSize(48, 48));
        save->setMaximumSize(QSize(48, 48));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        save->setIcon(icon4);
        save->setIconSize(QSize(32, 32));

        gridLayout->addWidget(save, 0, 2, 1, 1);

        mspace = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(mspace, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 4);

        togglehtml = new QPushButton(Form);
        togglehtml->setObjectName("togglehtml");
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        togglehtml->setFont(font5);
        togglehtml->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout_2->addWidget(togglehtml, 3, 0, 1, 4);

        replace_btn = new QPushButton(Form);
        replace_btn->setObjectName("replace_btn");
        replace_btn->setFont(font);
        replace_btn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.5, y1:0, x2:0.5, y2:1, stop:0 rgba(12, 12, 12, 255), stop:0.5 rgba(71, 71, 71, 255), stop:0.501 rgba(44, 44, 44, 255), stop:1 rgba(22, 22, 22, 255));"));

        gridLayout_2->addWidget(replace_btn, 4, 2, 1, 1);

        docname_mobile = new QLabel(Form);
        docname_mobile->setObjectName("docname_mobile");
        docname_mobile->setFont(font4);
        docname_mobile->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));
        docname_mobile->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(docname_mobile, 1, 0, 1, 4);

        QGraphicsDropShadowEffect *glow = new QGraphicsDropShadowEffect();
        glow->setOffset(0, 0);
        glow->setBlurRadius(48);
        glow->setColor(QColor(255, 255, 255));
        infobutton->setGraphicsEffect(glow);
        QGraphicsDropShadowEffect *glow2 = new QGraphicsDropShadowEffect();
        glow2->setOffset(0, 0);
        glow2->setBlurRadius(36);
        glow2->setColor(QColor(255, 255, 255));
        docname_mobile->setGraphicsEffect(glow2);
        QGraphicsDropShadowEffect *glow3 = new QGraphicsDropShadowEffect();
        glow3->setOffset(0, 0);
        glow3->setBlurRadius(36);
        glow3->setColor(QColor(255, 255, 255));
        fname->setGraphicsEffect(glow3);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "DocumentName - MintEdit", nullptr));
        reload_btn->setText(QCoreApplication::translate("Form", "Reload", nullptr));
        info_btn->setText(QCoreApplication::translate("Form", "Info", nullptr));
        loc_btn->setText(QCoreApplication::translate("Form", "Open Location", nullptr));
        exit_mdv->setText(QCoreApplication::translate("Form", "Go Back", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Adwaita Sans'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Form", "Markdown", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Form", "HTML", nullptr));

        recent->setText(QString());
#if QT_CONFIG(shortcut)
        recent->setShortcut(QCoreApplication::translate("Form", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        new_2->setText(QString());
#if QT_CONFIG(shortcut)
        new_2->setShortcut(QCoreApplication::translate("Form", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        saveas->setText(QString());
#if QT_CONFIG(shortcut)
        saveas->setShortcut(QCoreApplication::translate("Form", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        infobutton->setText(QCoreApplication::translate("Form", "MintText", nullptr));
        open->setText(QString());
#if QT_CONFIG(shortcut)
        open->setShortcut(QCoreApplication::translate("Form", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        fname->setText(QCoreApplication::translate("Form", "DocumentName", nullptr));
        save->setText(QString());
#if QT_CONFIG(shortcut)
        save->setShortcut(QCoreApplication::translate("Form", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        togglehtml->setText(QCoreApplication::translate("Form", "Toggle HTML/Markdown View", nullptr));
        replace_btn->setText(QCoreApplication::translate("Form", "Replace", nullptr));
        docname_mobile->setText(QCoreApplication::translate("Form", "DocumentNameMBX", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MINTTEXTITZAQB_H
