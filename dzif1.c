#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    int e = atoi(argv[5]);
    int f = atoi(argv[6]);

    int sum = a + b + c + d + e + f;
    int umn = a * b * c * d * e * f;

    if (sum > umn) {
        printf("%d\n", sum - umn);
    } 
    else if (sum < umn) {
        printf("%d\n", umn - sum);
    }
    else {
        printf("0\n");
    }

    return 0;
}