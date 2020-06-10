cmake_minimum_required(VERSION 3.1)

script:
  - CXX=/usr/bin/g++5 CC=/usr/bin/gcc-5 cmake .
  - cmake --build .
  
# set the project name
project(intro)

# add the executable
add_executable(intro src/main.cpp)