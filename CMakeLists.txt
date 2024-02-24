cmake_minimum_required(VERSION 3.5)

project(Graphic VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets PrintSupport Charts Concurrent)


set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        qcustomplot.cpp
        qcustomplot.h
        graphic.cpp
        graphic.h
        graphic.ui
)


add_executable(Graphic
    ${PROJECT_SOURCES}
)


target_link_libraries(Graphic Qt6::Widgets
                                      Qt6::Concurrent
                                      Qt6::PrintSupport
                                      Qt6::Charts
                                      )

