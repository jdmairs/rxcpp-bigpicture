cmake_minimum_required(VERSION 3.0.0)
project(observables VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)

add_executable(observables observables.cpp)
target_include_directories(observables SYSTEM PUBLIC "../../RxCpp-4.1.0/Rx/v2/src")
