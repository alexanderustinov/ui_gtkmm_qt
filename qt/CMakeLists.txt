cmake_minimum_required(VERSION 3.11)
project(ui_qt CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 

# https://stackoverflow.com/a/37457751
set(QT_VERSION_REQ "6.0")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt6Core ${QT_VERSION_REQ} REQUIRED)
find_package(Qt6Widgets ${QT_VERSION_REQ} REQUIRED)
# find_package(Qt6Quick ${QT_VERSION_REQ} REQUIRED)
# find_package(Qt6Gui ${QT_VERSION_REQ} REQUIRED)

set(CMAKE_AUTOMOC ON)

include_directories( include )

add_executable(ui_qt
    src/main.cpp
    src/window.cpp
    include/uiwindows.h

    )

target_link_libraries(${PROJECT_NAME}
    Qt6::Core
    Qt6::Widgets
    # Qt6::Quick  
    # Qt6::Gui  
  )
