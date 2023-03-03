/*
** EPITECH PROJECT, 2023
** AthenaLib [WSL: Ubuntu-22.04]
** File description:
** ARandom
*/

#pragma once

#include <random>

namespace Athena
{

class Random {
public:
    template<typename T>
    static T random();

    template<typename T>
    static T random(T min, T max);

};

template <typename T>
inline T Random::random()
{
    static std::uniform_real_distribution<T> distribution(0, 1);
    static std::mt19937 generator;
    return distribution(generator);
}

template <typename T>
inline T Random::random(T min, T max)
{
    static std::uniform_real_distribution<T> distribution(min, max);
    static std::mt19937 generator;
    return distribution(generator);
}

}