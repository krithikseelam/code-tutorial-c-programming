#include <stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*)malloc(n*sizeof(int));

    ptr[0] = 3.34;
    ptr[1] = 16.46;
    ptr[2] = 11.36;
    ptr[3] = 36.98;
    ptr[4] = 85.05;
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n",ptr[i]);
        
    }
    
    return 0;
}