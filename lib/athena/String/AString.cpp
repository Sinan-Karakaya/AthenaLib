/*
** EPITECH PROJECT, 2023
** AthenaLib [WSL: Ubuntu-22.04]
** File description:
** AString
*/

#include "AString.hpp"

void Athena::AString::trim(std::string &str)
{
    str.erase(0, str.find_first_not_of("\t\n\v\f\r ")); // left trim
    str.erase(str.find_last_not_of("\t\n\v\f\r ") + 1); // right trim
}

std::vector<std::string> Athena::AString::split(const std::string &str, const std::string &delim)
{
    std::vector<std::string> result;
    std::stringstream ss(str);

    while (ss.good()) {
        std::string substr;
        for (char c : delim) {
            std::getline(ss, substr, c);
            if (!substr.empty())
                result.push_back(substr);
        }
    }
    return result;
}
