#include <stdio.h>

int main(){
    int loops;
    int i = 0;
    printf("number of n natural numbers: ");
    scanf("%d",&loops);
    do
    {
        i++;
        printf("%d\n",i);
    } while (i < loops);
        
    return 0;
}