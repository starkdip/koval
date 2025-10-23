#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int num=stoi(argv[1]);
    int pos=stoi(argv[2]);
    int bit=(num >> pos) & 1; //Все биты результата, кроме младшего, обнуляются
    printf("%d\n",bit);
return 0;
}