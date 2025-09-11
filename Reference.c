#include <stdio.h>
#include "colorcoder.h"

void PrintReferenceManual() {
    printf("=== 25-Pair Color Code Reference Manual ===\n");
    printf("Pair No | Major Color | Minor Color\n");
    printf("------------------------------------\n");
    for(int pairNum = 1; pairNum <= MAX_MAJOR_COLORS * MAX_MINOR_COLORS; pairNum++) {
        ColorPair pair = GetColorFromPairNumber(pairNum);
        printf("%2d      | %-11s | %-11s\n", pairNum, pair.majorColor, pair.minorColor);
    }
}
