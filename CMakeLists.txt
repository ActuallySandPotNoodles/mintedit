cmake_minimum_required(VERSION 3.16)
project(mintedit_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(mintedit_cpp main.cpp window.h)

set_target_properties(mintedit_cpp PROPERTIES
        POSITION_INDEPENDENT_CODE ON
)

target_link_libraries(mintedit_cpp PRIVATE Qt::Widgets)