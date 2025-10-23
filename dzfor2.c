#include <stdio.h>
int main() {
    int циферка;
    long факториал = 1;
    printf("напиши циферку: ");
    scanf("%d", &циферка);
    for (int i = 1; i <= циферка; i++) {
    факториал = факториал * i;
    }
    printf("Факториал = %d\n", факториал);
    printf("начальная циферка = %d\n", циферка);
    return 0;


}