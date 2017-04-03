cmake_minimum_required(VERSION 3.7)
project(AgileDev)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp OCP/TableDrivedShape.cpp OCP/TableDrivedShape.h OCP/LSPRunner.cpp OCP/LSPRunner.h ISP/TimedDoor.cpp ISP/TimedDoor.h)
add_executable(AgileDev ${SOURCE_FILES})