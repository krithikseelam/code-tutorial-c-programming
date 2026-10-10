#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*)malloc(n* sizeof(int));
    // int arr[n]; not allowed in C
    ptr[0] = 3;
    free(ptr);
    printf("%d",ptr[0]);
    // memory of ptr is released.
    return 0;
}