cmake_minimum_required(VERSION 3.16.0)
project(hello_world)
enable_language(C)

add_subdirectory(external/factorial)

add_executable(hello_world src/main.c)
target_link_libraries(hello_world PUBLIC factorial)
