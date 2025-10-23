#include <stdio.h>
#include <stdlib.h>
int main(int agrc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    if(a < 0) {
        a = 0;
    }
    if(b < 0) {
        b = 0;
    }
    if(c < 0) {
        c = 0;
    }
    if(d < 0) {
        d = 0;
    }
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}