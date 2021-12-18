#include "library.hpp"

#include <spdlog/spdlog.h>

int main(int argc, char *argv[])
{
    spdlog::set_level(spdlog::level::debug);

    spdlog_discussions_2213::Repeater repeater;

    spdlog::info("Repeat: {}", repeater.twice("Hello, World!"));

    return EXIT_SUCCESS;
}
