cmake_minimum_required(VERSION 3.10)

project(Calculator)

add_library(calci SHARED
    calci.cpp
)

target_include_directories(calci PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(calculator_app
    main1.cpp
)

target_link_libraries(calculator_app calci)