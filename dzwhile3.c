#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int a=atoi(argv[1]), b=atoi(argv[2]), count=0;
    int proof = a; 
    
    while (proof <= b) {
        int prost = 1;
        int del = 2;
        
        if (proof > 1) {
            while (del < proof) {
                if (proof % del == 0) {
                    prost = 0;  // нашли делитель - не простое
                    break;
                }
                del++;
            }
        } else {
            proof = 0;  // числа <= 1 не являются простыми
        }
        
        // Если число простое, увеличиваем счетчик
        if (proof) {
            count++;
        }
        
        a++;  // переходим к следующему числу
    }
    
    // Вывод результата
    printf("Кол-во [%d, %d]: %d\n", a, b, count);
    
    return 0;
}