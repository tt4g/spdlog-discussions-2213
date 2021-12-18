#include "library.hpp"

#include <spdlog/spdlog.h>

#include <utility>

namespace spdlog_discussions_2213
{

std::string Repeater::twice(std::string_view source)
{
    spdlog::debug("source: {}", source);

    std::string concat(source);
    concat.append(source);

    return std::move(concat);
}

}
