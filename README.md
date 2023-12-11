# Linking against a subproject with CMake

This is a minimal example where a CMake project links against a library built by
another CMake project.

The parent project consists of a `main.c` file that calls into the child projects
`factorial.c` file.
