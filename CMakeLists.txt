cmake_minimum_required(VERSION 3.7)
project(AgileDev)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp LSP/TableDrivedShape.cpp LSP/TableDrivedShape.h LSP/LSPRunner.cpp LSP/LSPRunner.h)
add_executable(AgileDev ${SOURCE_FILES})