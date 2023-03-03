/*
** EPITECH PROJECT, 2023
** AthenaLib [WSL: Ubuntu-22.04]
** File description:
** AString
*/

#pragma once

#include <string>
#include <vector>
#include <sstream>

namespace Athena
{

class AString {
public:
    static void trim(std::string &str);
    static std::vector<std::string> split(const std::string &str, char delim);

};

}
