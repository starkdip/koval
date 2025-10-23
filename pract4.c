#include <stdlib.h>
#include <stdio.h>
int main(int argc, char** argv){
        int num=atoi(argv[1]);
    int pos=atoi(argv[2]);
    for (int i=sizeof(int)*8-1;i>=0;--i){
        printf("%d\n",(num >>i)&1);
    }
int gena_na=num ^ (1<<pos);// ^ инвертирует бит в позиции pos числа num
printf("%d\n",gena_na);
return 0;
} 
