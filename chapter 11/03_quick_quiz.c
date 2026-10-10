#include <stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
    // int arr[n]; not allowed in C
    ptr[0] = 3;
    printf("%d",ptr[2]);
    //calloc has 0 for non given value
    //malloc has a grabage value if we dont give any value
    return 0;
}