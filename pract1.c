#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    printf("%d\n",5>>2);
    unsigned int a = atoi(argv[1]);
    for (int i = 0; i < sizeof(a)*8; ++i) {
        printf("%d",(a>>i) & 1 );
    }
printf("\n");
return 0;
}