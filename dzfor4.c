#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(int argc, char** argv){
    double s = 0;
    for (int pupa=1; pupa<=atoi(argv[1]);pupa++){
        s+=sin(pupa);
    }
    printf("%f\n",s);
    return 0;
}