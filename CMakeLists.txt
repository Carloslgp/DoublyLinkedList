cmake_minimum_required(VERSION 3.20)
project(DoublyLinkedList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tests src/tests/test.cpp)
target_include_directories(tests PRIVATE include)

