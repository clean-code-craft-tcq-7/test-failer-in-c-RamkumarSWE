#include <stdio.h>
#include <assert.h>

#define MAX_COLOR_PAIR 25
#define MAX_COLOR_LEN 15

typedef struct {
    char majorColor[MAX_COLOR_LEN];
    char minorColor[MAX_COLOR_LEN];
}ColorPair;

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
ColorPair colorPair[MAX_COLOR_PAIR];

void printColorMap() {
    int size, i;
    size = fillColorMapList();

    for (i = 0; i < size; i++) {
        printf("%d | %s | %s\n", i, colorPair[i].majorColor, colorPair[i].minorColor);
    }
}

int fillColorMapList() {

    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            strcpy(colorPairList[(i*5)+j].majorColor, majorColor[i]);
            strcpy(colorPairList[(i*5)+j].minorColor, minorColor[j]);
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);

    assert(result == 0);
    assert(result == 10000);
    assert(result == -10000);

    printf("All is well (maybe!)\n");
    return 0;
}