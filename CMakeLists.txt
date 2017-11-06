cmake_minimum_required(VERSION 3.8)
project(ZMPO_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Tree/Tree.cpp Tree/Tree.h Tree/Node.cpp Tree/Node.h Values.h Tree/Tools.cpp Tree/Tools.h Interface.cpp Interface.h)
add_executable(ZMPO_3 ${SOURCE_FILES})