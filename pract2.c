#include <stdlib.h>
#include <stdio.h>
int main(int argc, char** argv){
        int num=atoi(argv[1]);
    int pos=atoi(argv[2]);
    for (int i=sizeof(int)*8-1;i>=0;--i){
        printf("%d\n",(num >>i)&1);
    }
int gena_na=num | (1<<pos); //Если pos > 1, то (1<<pos) равно 1, и выполняется num | 1. Эта операция устанавливает только младший бит (бит 0) в 1, если pos <= 1, то (1<<pos) равно 0
return 0;
} 