#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
    unsigned int hooba_booba=atoi(argv[1]);
    if (hooba_booba<=0xffff){
        printf("%d", hooba_booba);
    }
    else if(hooba_booba<=0xFFFFF){
        unsigned int m1,m2,result;
        hooba_booba-=0x10000;
        m1=(hooba_booba>>10)&0x3ff;
        m2=hooba_booba&0x3ff;
        m1+=0xD800;
        m2+=0xD800;
        result=(m1<<16)|m2;
        prinf("%d",result);
    }
    return 0;
}