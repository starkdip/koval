#include "../include/array_function.h"
#include <stdio.h>
#include <stdlib.h>
void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (size_t i =0; i<size_src1;i++){
        dest[i] = src1[i];
    }
    for (size_t i =size_src1; i <size_src1+size_src2;i++){
        dest[i]=src2[i-size_src1];
    }
}
int comp(const void *a, const void *b){
    return (*(int *)a-*(int *)b);
}
void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i =0; i<size_src1;i++){
        dest[i]=src1[i];
    }
    for (size_t i =size_src1; i <size_src1+size_src2;i++){
        dest[i]=src2[i-size_src1];
    }
    qsort(dest, size_src1 + size_src2, sizeof(int), comp);
}
void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    if (src==NULL || min==NULL || max==NULL || max==NULL || size==0){
        return;
    }
    *min=src[0];
    *max=src[0];
    for (size_t i=1; i<size;i++){
        if (src[i]<*min){
            *min=src[i];
        }
        if (src[i]>*max){
            *max=src[i];
        }
    }
}