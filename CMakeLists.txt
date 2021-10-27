cmake_minimum_required(VERSION 3.0)
project(rat)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
add_executable(rat main.cpp)

target_link_libraries(rat wiringPi)