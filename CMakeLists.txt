cmake_minimum_required(VERSION 3.29)
project(AlgoAssignment)

set(CMAKE_CXX_STANDARD 20)

add_library(modules
        src/FibonacciSeries.cpp
        src/FibonacciSeries.h
        src/Search.cpp
        src/Search.h
        src/Heap.cpp
        src/Heap.h
        src/PriorityQueue.cpp
        src/PriorityQueue.h
        src/HeapSort.cpp
        src/HeapSort.h)

add_executable(AlgoAssignment main.cpp)
target_link_libraries(AlgoAssignment PRIVATE modules)

target_include_directories(modules PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

enable_testing()
include(FetchContent)

FetchContent_Declare(
        googletests
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletests)

add_executable(unit_tests
        tests/BuildTest.cpp
        tests/FabonacciTests.cpp
        tests/HeapTests.cpp
        tests/PriorityQueueTests.cpp
        tests/HeapSortTests.cpp
)

target_link_libraries(unit_tests PRIVATE modules gtest_main)
include(GoogleTest)
gtest_discover_tests(unit_tests)

target_include_directories(unit_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
