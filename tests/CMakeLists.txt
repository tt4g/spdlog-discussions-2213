add_executable(spdlog_discussions_2213_test main.cpp)
target_link_libraries(spdlog_discussions_2213_test
    PUBLIC
        library
        spdlog)
target_include_directories(
    spdlog_discussions_2213_test
        PRIVATE
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../lib>)
