cmake_minimum_required(VERSION 3.1)
project(18w36q4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Boost 1.50 REQUIRED)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_subdirectory( utility )
    add_executable(18w36q4 main.cpp event.cpp feature_set.cpp
        feature_01.cpp
        feature_02.cpp
        feature_03.cpp
        feature_04.cpp
        feature_05.cpp
        feature_06.cpp
        feature_07.cpp
        feature_08.cpp
        feature_09.cpp
        feature_10.cpp
    )
    target_link_libraries(18w36q4 utility ${Boost_LIBRARIES})
endif()

