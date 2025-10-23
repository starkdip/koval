#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char** argv){
    double x = atoi(argv[1]);
    int n = atoi(argv[2]);
    double s=0;
    
    for (int lupa=1; lupa<=n;  lupa++){
        double a =0.18 + 0.02*(lupa-1);
        s=s+pow(a*x,lupa);
    }
    printf("%f\n",s);
    return 0;
}