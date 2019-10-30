cmake_minimum_required(VERSION 3.0.0)
project(training_tree)

include_directories("${PROJECT_SOURCE_DIR}")

add_executable(training_tree main.cpp training_node.cpp)
