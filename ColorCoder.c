#include <stdio.h>
#include <string.h>
#include "colorcoder.h"

const char* MajorColorNames[MAX_MAJOR_COLORS] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[MAX_MINOR_COLORS] = {"Blue", "Orange", "Green", "Brown", "Slate"};

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBased = pairNumber - 1;
    colorPair.majorColor = MajorColorNames[zeroBased / MAX_MINOR_COLORS];
    colorPair.minorColor = MinorColorNames[zeroBased % MAX_MINOR_COLORS];
    return colorPair;
}

int GetPairNumberFromColor(const char* major, const char* minor) {
    int majorIndex = -1, minorIndex = -1;

    for (int i = 0; i < MAX_MAJOR_COLORS; i++) {
        if (strcmp(MajorColorNames[i], major) == 0) {
            majorIndex = i; break;
        }
    }
    for (int j = 0; j < MAX_MINOR_COLORS; j++) {
        if (strcmp(MinorColorNames[j], minor) == 0) {
            minorIndex = j; break;
        }
    }

    if (majorIndex == -1 || minorIndex == -1) return -1;  
    return majorIndex * MAX_MINOR_COLORS + minorIndex + 1;
}
