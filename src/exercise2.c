#include <stdio.h>
int main() {
    double num[10];
    int size = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < size; i++) {
        scanf("%lf", &num[i]);
    }
    for (int i = size - 1; i >= 0; i--) {
        printf("%.0f", num[i]);
    }
    printf("\n");
    return 0;
}