# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Simple3DEditor)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable target
add_executable(simple3deditor
    src/main.cpp
    src/Vector3.cpp
    src/Object3D.cpp
    src/Cube.cpp
    src/Editor.cpp
)

# Include directories (for headers)
target_include_directories(simple3deditor PRIVATE ${CMAKE_SOURCE_DIR}/src)
