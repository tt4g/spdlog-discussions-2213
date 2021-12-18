#include "library.hpp"

#include <spdlog/spdlog.h>

#include <string>

static bool test_repeater()
{
    spdlog_discussions_2213::Repeater repeater;

    std::string twice = repeater.twice("foo");

    return twice == "foofoo";
}

int main(int argc, char *argv[])
{
    spdlog::set_level(spdlog::level::debug);

    spdlog::info("Starting tests...");

    if (test_repeater()) {
        spdlog::info("Complete.");

        return EXIT_SUCCESS;
    } else {
        spdlog::error("Failed!");

        return EXIT_FAILURE;
    }
}
