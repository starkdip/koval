#include <stdio.h>
int main() {
    float m[10];
    for (int i = 0; i < 10; i++)
        scanf("%f", &m[i]);
    int k;
    float x;
    scanf("%f %d", &x, &k);
    for (int i = 9; i > k; i--)
        m[i] = m[i - 1];
    m[k] = x;
    for (int i = 0; i < 10; i++)
        printf("%.1f", m[i]);
    return 0;
}