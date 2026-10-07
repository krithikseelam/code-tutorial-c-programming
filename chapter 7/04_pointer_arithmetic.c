#include <stdio.h>

int main(){
    // int a = 5;
    // int* ptr = &a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);
    // ptr++;
    // printf("the value of ptr is %u\n",ptr);

    char a = 'a';
    char* ptr = &a;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    return 0;
} 