#include <stdio.h>
#include "colorcoder.h"

int main() {
    // Test translations
    ColorPair pair = GetColorFromPairNumber(23);
    printf("Pair 23 is %s - %s\n", pair.majorColor, pair.minorColor);

    int pairNum = GetPairNumberFromColor("Red", "Green");
    printf("Red-Green is pair number %d\n", pairNum);

    // Print the reference manual
    PrintReferenceManual();

    return 0;
}
