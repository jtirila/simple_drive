cmake_minimum_required(VERSION 2.6)

project(SimpleDrive)

add_subdirectory(src)
add_subdirectory(tests)

enable_testing()
add_test(MyTest test)
