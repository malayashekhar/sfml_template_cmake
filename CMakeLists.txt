cmake_minimum_required(VERSION 3.14)
project(sfml_project_name)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_FILES main.cpp)
add_executable(sfml_project_name ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(sfml_project_name sfml-system sfml-window sfml-graphics sfml-audio sfml-network)