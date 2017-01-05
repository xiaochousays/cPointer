#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
// feature1 change
int main() {
    int i;
    int* p;
    int** p2p = &p;
    p = &i;
    int j = 0;
    // int* p = ;
    // int** p2p, j = 0;

    printf("i = %d\np = %d\np2p = %d\n**p2p = %d\nj = %d\n", i, \
        *p, **p2p, **p2p, j);

    for(int i = 0; i < 8; ++i) {
        printf("%s\n", ("xyze" + i));
    }

    strcpy("Hello\n", "Bye!\n");
    printf("Hello\n");

    return 0;
}
// test conflict
