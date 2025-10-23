#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    int d = atoi(argv[4]);
    int e = atoi(argv[5]);
    int sum = 0;
    if (a > 0){
        (sum = sum + a);
    }
    if (b > 0){
        (sum = sum + b);
    }
    if (c > 0){
        (sum = sum + c);
    }
    if (d > 0){
        (sum = sum + d);
    }
    if (e > 0){
        (sum = sum + e);
    }
    
    printf("sum = %d\n", sum);
}