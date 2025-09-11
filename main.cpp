#include "ColorCoder.hpp"
#include <iostream>

int main() {
    using namespace ColorCoder;

    try {
        ColorPair pair = getColorFromPairNumber(23);
        std::cout << "Pair 23 is " << pair.majorColor << " - " << pair.minorColor << "\n";

        int pairNum = getPairNumberFromColor("Red", "Green");
        std::cout << "Red-Green is pair number " << pairNum << "\n";

        // Print full reference manual
        printReferenceManual();
    }
    catch(const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
    }

    return 0;
}
