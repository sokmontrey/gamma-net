cmake_minimum_required(VERSION 3.24.0)
project(Test)

# add_executable(gamma_net_test test_main.cpp)
add_executable(gamma_net_test sin_prediction.cpp)

target_link_libraries(gamma_net_test gamma_net)

