cmake_minimum_required(VERSION 3.16.0)
project(factorial)
enable_language(C)

add_library(factorial src/factorial.c)
target_include_directories(factorial PUBLIC include)
