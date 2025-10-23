#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int b = atoi(argv[1]);
    int summa = 0;
    while (b>0) {
        summa = summa +b%10;
        b/10;
    }
    printf("%d",summa);
}