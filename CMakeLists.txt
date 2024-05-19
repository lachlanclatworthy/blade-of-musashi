cmake_minimum_required(VERSION 3.16)

project(blade-of-musashi VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick Network)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appblade-of-musashi
    main.cpp
)

qt_add_qml_module(appblade-of-musashi
    URI blade-of-musashi
    VERSION 1.0
    QML_FILES Main.qml
    QML_FILES Box.qml
    SOURCES vaughn.cpp
    SOURCES vaughn.h
    SOURCES dog.cpp dog.h
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appblade-of-musashi PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appblade-of-musashi
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appblade-of-musashi
    PRIVATE Qt6::Quick
    PRIVATE Qt6::Network
)

include(GNUInstallDirs)
install(TARGETS appblade-of-musashi
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
