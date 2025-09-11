#ifndef COLORCODER_H
#define COLORCODER_H

#define MAX_MAJOR_COLORS 5
#define MAX_MINOR_COLORS 5

extern const char* MajorColorNames[MAX_MAJOR_COLORS];
extern const char* MinorColorNames[MAX_MINOR_COLORS];

typedef struct {
    const char* majorColor;
    const char* minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const char* major, const char* minor);
void PrintReferenceManual();

#endif
