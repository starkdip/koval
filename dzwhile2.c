#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int n=atoi(argv[1]), i = 2;
    
    while (i < n && n % i != 0) {
        i++;
    }
    
    if (i == n || n == 2) {
        printf("Простое\n");
    } else {
        printf("Не простое\n");
    }
    
    return 0;
}