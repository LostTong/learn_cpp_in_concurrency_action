cmake_minimum_required (VERSION 2.6)
project (Test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fPIC -pipe -std=c++17 -g")


add_executable (Test ../chapter_2/1_5.cpp)

target_link_libraries(Test pthread)
