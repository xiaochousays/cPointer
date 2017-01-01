#include <stdio.h>
// modify master
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
}
// test conflict
