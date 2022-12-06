#include <stdio.h>
#include <assert.h>

/* Assumptions:
The size of 1 to 38 falls under S
The size of 39 to 42 falls under M
The size above 42 falls under L
*/
char size(int cms) {
    char sizeName = '\0';
    if(cms > 0 && cms <= 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms <= 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    
    assert(size(38) == 'S');
    assert(size(1) == 'S');
    assert(size(37) == 'S');
    
    assert(size(42) == 'M');
    assert(size(40) == 'M');

    assert(size(43) == 'L');
    assert(size(100000) == 'L');

    assert(size(0) == '\0');
    assert(size(-1) == '\0');
    assert(-100000 == '\0');

    printf("All is well (maybe!)\n");
    return 0;
}
