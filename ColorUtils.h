#ifndef COLORUTILS_H
#define COLORUTILS_H
#include "ColorPair.h"

namespace TelCoColorCoder
{
    extern const char* MajorColorNames[];
    extern const int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern const int numberOfMinorColors;

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
