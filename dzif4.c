#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
    int absolute_cinema = a;
    int max2 = b;
  
    if (a > b) {
        absolute_cinema = a;
        max2 = b;
    } else {
        absolute_cinema = b;
        max2 = a;
    }
    
    if (c > absolute_cinema) {
        max2 = absolute_cinema;
        absolute_cinema = c;
    } else if (c > max2) {
        max2 = c;
    }
    
    if (d > absolute_cinema) {
        max2 = absolute_cinema;
        absolute_cinema = d;
    } else if (d > max2) {
        max2 = d;
    }
    printf("%d %d", absolute_cinema, max2);
}    