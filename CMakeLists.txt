cmake_minimum_required(VERSION 3.7)
project(AgileDev)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(SOURCE_FILES main.cpp OCP/TableDrivedShape.cpp OCP/TableDrivedShape.h OCP/OCPRunner.cpp OCP/OCPRunner.h ISP/TimedDoor.cpp ISP/TimedDoor.h ISP/ISPRunner.cpp ISP/ISPRunner.h ISP/ATM/ATMTransaction.cpp ISP/ATM/ATMTransaction.h ISP/ATM/ATMUI.cpp ISP/ATM/ATMUI.h)
add_executable(AgileDev ${SOURCE_FILES})