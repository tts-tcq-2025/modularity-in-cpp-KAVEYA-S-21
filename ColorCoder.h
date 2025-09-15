#ifndef COLORCODER_H
#define COLORCODER_H

#include <string>
#include <vector>

namespace ColorCoder {

    constexpr int MAX_MAJOR_COLORS = 5;
    constexpr int MAX_MINOR_COLORS = 5;

    extern const std::vector<std::string> MajorColorNames;
    extern const std::vector<std::string> MinorColorNames;

    struct ColorPair {
        std::string majorColor;
        std::string minorColor;
    };

    ColorPair getColorFromPairNumber(int pairNumber);
    int getPairNumberFromColor(const std::string& major, const std::string& minor);
    void printReferenceManual();

}

#endif
