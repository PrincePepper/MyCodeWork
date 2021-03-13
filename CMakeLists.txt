cmake_minimum_required(VERSION 3.17)
project(CodeWork)

set(CMAKE_CXX_STANDARD 20)

add_executable(Test test.cpp)
add_executable(PrimeNumber "Теория чисел/простые числа.cpp")
add_executable(Factorisation "Теория чисел/факторизация.cpp")
add_executable(Eratosthenes "Теория чисел/решето эратосфена.cpp")
add_executable(FactorisationEratosthenes "Теория чисел/решето эратосфена с факторизацией.cpp")