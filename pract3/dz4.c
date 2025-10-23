#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
    unsigned int hooba_booba=atoi(argv[1]);
    if (hooba_booba<=0xffff){
        printf("%d", hooba_booba);
    }
    else if(hooba_booba<=0xffff){
        unsigned int m1,m2,result;
        m1=(hooba_booba>>16)&0xffff;
        m2=hooba_booba&0xffff;
        m1-=0xD800;
        m2-=0xDC00;
        m2&=0x3ff;
        printf("%x\n",m1);
        m1=(m1<<10)&0x3ff;
        printf("%x\n",m1);
        result=(m1<<10)|m2+0x10000;
        prinf("%u",result);
    }
return 0;
}