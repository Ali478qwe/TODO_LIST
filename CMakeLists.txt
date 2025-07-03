cmake_minimum_required(VERSION 3.10)

project(TO-DO-LIST)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

file(MAKE_DIRECTORY "${CMAKE_SOURCE_DIR}/output")


add_executable(TO-DO-LIST 
                src/TO-DO-LIST.cpp 
                include/Task/Task.cpp
                include/Storage/Storage.cpp
               )

set_target_properties(TO-DO-LIST PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/output"
)

