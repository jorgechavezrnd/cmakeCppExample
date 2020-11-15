cmake_minimum_required(VERSION 3.10)

# set the project name
project(Example VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# list all source files to compile
file(GLOB_RECURSE MY_SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# add the executable
add_executable(Example ${MY_SOURCE_FILES})

# add include directory
target_include_directories(Example PUBLIC
                           ${CMAKE_CURRENT_SOURCE_DIR}/include)
