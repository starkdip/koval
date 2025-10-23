#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char** argv){
    int num=atoi(argv[1]);
    int r=0;
    if (num < 0) {
        printf("-");
        num = -num;
}
    while (num>0){
        r=r*10+num%10;
        num=num/10;
    }
    printf("%d\n",r);
    return 0;
}