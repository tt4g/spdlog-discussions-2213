
cmake_minimum_required(VERSION 3.12.0)
project(spdlog_discussions_2213 VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SPDLOG_BUILD_SHARED OFF CACHE BOOL "")
set(SPDLOG_BUILD_EXAMPLE OFF CACHE BOOL "")
set(SPDLOG_BUILD_EXAMPLE_HO OFF CACHE BOOL "")
set(SPDLOG_BUILD_TESTS OFF CACHE BOOL "")
set(SPDLOG_BUILD_TESTS_HO OFF CACHE BOOL "")
set(SPDLOG_BUILD_BENCH OFF CACHE BOOL "")
set(SPDLOG_SANITIZE_ADDRESS OFF CACHE BOOL "")
set(SPDLOG_INSTALL OFF CACHE BOOL "")
set(SPDLOG_FMT_EXTERNAL OFF CACHE BOOL "")
set(SPDLOG_FMT_EXTERNAL_HO OFF CACHE BOOL "")
set(SPDLOG_NO_EXCEPTIONS OFF CACHE BOOL "")
add_subdirectory(thirdparty/spdlog)

add_library(library
    lib/library.cpp)
target_link_libraries(library
    PUBLIC
        spdlog)

add_executable(spdlog_discussions_2213 main.cpp)
target_link_libraries(spdlog_discussions_2213
    PUBLIC
        library)
target_include_directories(
    spdlog_discussions_2213
        PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/lib>
            $<INSTALL_INTERFACE:include/spdlog_discussions_2213>)

add_subdirectory(tests)
