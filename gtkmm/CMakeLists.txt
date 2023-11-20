cmake_minimum_required(VERSION 3.11)
project(ui_gtkmm CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) 

# https://wiki.gnome.org/Projects/gtkmm/UsingCMake
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)

link_directories(
    ${GTKMM_LIBRARY_DIRS}  )

include_directories(
    ${GTKMM_INCLUDE_DIRS}  )

add_executable(ui_gtkmm
    src/main.cpp )

target_link_libraries(ui_gtkmm 
    ${GTKMM_LIBRARIES}  )