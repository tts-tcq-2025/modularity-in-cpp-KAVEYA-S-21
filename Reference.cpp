#include "ColorCoder.h"
#include <iostream>
#include <iomanip>

namespace ColorCoder {

    void printReferenceManual() {
        std::cout << "=== 25-Pair Color Code Reference Manual ===\n";
        std::cout << "Pair No | Major Color | Minor Color\n";
        std::cout << "------------------------------------\n";

        for(int pairNum = 1; pairNum <= MAX_MAJOR_COLORS * MAX_MINOR_COLORS; ++pairNum) {
            ColorPair pair = getColorFromPairNumber(pairNum);
            std::cout << std::setw(6) << pairNum
                      << " | " << std::setw(11) << pair.majorColor
                      << " | " << std::setw(11) << pair.minorColor
                      << "\n";
        }
    }

}

