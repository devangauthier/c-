cmake_minimum_required(VERSION 3.27)
project(InvestmentCalculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(InvestmentCalculator main.cpp
        InvestmentCalculator.cpp
        InvestmentCalculator.h)
