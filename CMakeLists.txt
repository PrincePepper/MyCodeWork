cmake_minimum_required(VERSION 3.17)
project(CodeWork)

set(CMAKE_CXX_STANDARD 20)

add_executable(Test test.cpp)
add_executable(PrimeNumber "простые числа.cpp")
add_executable(Factorisation факторизация.cpp)
add_executable(Eratosthenes "решето эратосфена.cpp")
add_executable(FactorisationEratosthenes "решето эратосфена с факторизацией.cpp")