#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    int r=atoi(argv[1]),g=atoi(argv[2]),b=atoi(argv[3]);
    printf("%d",(r<<16)|(g<<8)|b);
}