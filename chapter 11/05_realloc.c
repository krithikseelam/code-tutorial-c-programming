#include <stdio.h>
#include<stdlib.h>

int main(){
    int n = 5;
    int* ptr;
    ptr = (int*)malloc(n* sizeof(int));
    // int arr[n]; not allowed in C
    ptr[0] = 3;
    printf("%d",ptr[0]);
    ptr = (int*) realloc(ptr,10*sizeof(int));
    // realloc reallocats the memory to a new size
    return 0;
}