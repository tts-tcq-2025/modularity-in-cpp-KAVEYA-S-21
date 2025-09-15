#include "ColorCoder.h"
#include <stdexcept>

namespace ColorCoder {

    const std::vector<std::string> MajorColorNames = {"White", "Red", "Black", "Yellow", "Violet"};
    const std::vector<std::string> MinorColorNames = {"Blue", "Orange", "Green", "Brown", "Slate"};

    ColorPair getColorFromPairNumber(int pairNumber) {
        if(pairNumber < 1 || pairNumber > MAX_MAJOR_COLORS * MAX_MINOR_COLORS) {
            throw std::out_of_range("Invalid pair number");
        }
        int zeroBased = pairNumber - 1;
        return {MajorColorNames[zeroBased / MAX_MINOR_COLORS],
                MinorColorNames[zeroBased % MAX_MINOR_COLORS]};
    }

    int getPairNumberFromColor(const std::string& major, const std::string& minor) {
        int majorIndex = -1, minorIndex = -1;

        for(int i = 0; i < MAX_MAJOR_COLORS; i++) {
            if(MajorColorNames[i] == major) {
                majorIndex = i;
                break;
            }
        }
        for(int j = 0; j < MAX_MINOR_COLORS; j++) {
            if(MinorColorNames[j] == minor) {
                minorIndex = j;
                break;
            }
        }

        if(majorIndex == -1 || minorIndex == -1) {
            throw std::invalid_argument("Invalid color names");
        }
        return majorIndex * MAX_MINOR_COLORS + minorIndex + 1;
    }

}
