cmake_minimum_required(VERSION 3.10)
project(Calculator)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)



# Include directories for CppUTest headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/CppUTest/include)

# Add the executable target for the calculator app
add_executable(calculator calculator.cpp)

# Link the CppUTest library with the calculator target
target_link_libraries(calculator ${CMAKE_CURRENT_SOURCE_DIR}/cpputest/lib/libCppUTest.a)

# Add the executable target for the calculator test cases
add_executable(calculator_test calculator_test.cpp)

# Link the CppUTest library with the calculator test target
target_link_libraries(Calculator_test CppUtest CppUtestExt)
