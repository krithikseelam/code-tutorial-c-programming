#include <stdio.h>

int main(){
    char i = 'A';
    char*j = &i; // j is a pointer pointing to i
    float  k = 5.232;
    float* k1 = &k; 
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of k is %p\n",&k);

    printf("the value of address j is %d\n",*j);
    return 0;
}
