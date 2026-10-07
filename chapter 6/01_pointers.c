#include <stdio.h>

int main(){
    int i = 72;
    int*j = &i; // j is a pointer pointing to i
    int k =128;
    printf("the address of i is %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of k is %p",&k);

    printf("the value of address j is %d\n",*j);
    return 0;
}
