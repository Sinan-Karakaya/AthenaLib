cmake_minimum_required(VERSION 3.0)

# Build lib
project(athenaLib)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fdiagnostics-color=always")
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB_RECURSE ATHENASOURCES "lib/athena/*.cpp")
add_library(athena STATIC ${ATHENASOURCES})

# Build project
project(myProject)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -fdiagnostics-color=always")
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/lib/athena)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(myProject ${SOURCES})
target_link_libraries(myProject athena)
