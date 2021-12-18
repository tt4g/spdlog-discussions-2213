#include <string>
#include <string_view>

#ifndef SPDLOG_DISCUSSIONS_2213_LIBRARY_HPP
#define SPDLOG_DISCUSSIONS_2213_LIBRARY_HPP

namespace spdlog_discussions_2213
{

    class Repeater
    {
    public:

        /**
         * @brief Repeat `source` twice.
         *
         * @param source source input.
         * @return std::string `source` + `source`
         */
        std::string twice(std::string_view source);

    };

}

#endif // SPDLOG_DISCUSSIONS_2213_LIBRARY_HPP
