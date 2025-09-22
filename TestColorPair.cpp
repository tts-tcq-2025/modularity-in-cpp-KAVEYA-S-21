#include <iostream>
#include "ColorPair.h"
#include "ColorUtils.h"
#include "TestColorPair.h"

namespace TelCoColorCoder {
    // Test a single color pair and print the result
    void TestColorPairFunction(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        std::string result = colorPair.ToString();

        std::cout << "Pair Number: " << pairNumber
                  << " => " << result << std::endl;

        if (colorPair.getMajor() != expectedMajor ||
            colorPair.getMinor() != expectedMinor) {
            std::cerr << "Test failed for pair number: " << pairNumber << std::endl;
        }
    }

    // Run all color pair tests
    void RunTests() {
        TestColorPairFunction(4, MajorColor::WHITE, MinorColor::BROWN);
        TestColorPairFunction(5, MajorColor::WHITE, MinorColor::SLATE);
        TestColorPairFunction(23, MajorColor::VIOLET, MinorColor::GREEN);
    }

} // namespace TelCoColorCoder
