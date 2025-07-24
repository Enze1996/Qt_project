cmake_minimum_required(VERSION 3.5)
project(Qt_first_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
)
set(PROJECT_HEADERS
    mainwindow.h
)
set(PROJECT_FORMS
    mainwindow.ui
)

# 确保 moc 处理
qt_wrap_cpp(PROJECT_SOURCES ${PROJECT_HEADERS})
qt_wrap_ui(PROJECT_SOURCES ${PROJECT_FORMS})
qt_add_executable(Qt_first_project
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)
target_link_libraries(Qt_first_project PRIVATE Qt6::Widgets)

qt_finalize_executable(Qt_first_project)
