#pragma once

#include <string>

namespace Utils::Console
{
    void printCenteredHorizontially(std::string str, int column = 0);
    void printCenteredVertically(std::string str, int row = 0);
    void printCentered(std::string str, signed int rowOffset = 0);
}
