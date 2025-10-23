#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
    unsigned int hooba_booba=atoi(argv[1]);
    if (hooba_booba<=0x7f){
        printf("%d", hooba_booba);
    }
    else if (hooba_booba<=0x7ff)
    {
        unsigned int result;
        result =hooba_booba&0x1f3f;
        printf("%d",result);
    }
    else if(hooba_booba<=0xffff){
        unsigned int result;
        result =hooba_booba&0xf3f3f;
        printf("%d",result);
    }
    else if(hooba_booba<=0x1fffff){
        unsigned int result;
        result =hooba_booba&0x73f3f3f;
        printf("%d",result);
}
return 0;
}