#include <stdio.h>

int main() {
    int start = 1;
    int end = 10;
    int sum = 0;
    
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    
    printf("Сумма чисел от %d до %d: %d\n", start, end, sum);
    return 0;
}