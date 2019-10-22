#include "Console-Utilities.h"
#if __SWITCH__
#include <switch.h>
#endif

#define center(p, c) ((p - c) / 2)
#if __SWITCH__
const int maxConsoleWidth = consoleGetDefault()->consoleWidth;
const int maxConsoleHeight = consoleGetDefault()->consoleHeight;
#else
//Fill in with your own sizes if compiling for another platform
const int maxConsoleWidth = 80;
const int maxConsoleHeight = 45;
#endif

namespace Utils::Console
{
    void printCenteredHorizontially(std::string str, int column = 0)
    {
        printf("/x1b[%d;%d%s", center(maxConsoleWidth, str.size()), column, str.c_str());
    }
    
    void printCenteredVertically(std::string str, int row = 0)
    {
        printf("/x1b[%d;%d%s", row, center(maxConsoleHeight, str.size()) , str.c_str());
    }

    void printCentered(std::string str, signed int rowOffset = 0)
    {
        printf("/x1b[%d;%d%s", center(maxConsoleWidth, str.size()) + rowOffset, center(maxConsoleHeight, str.size()) , str.c_str());
    }
}