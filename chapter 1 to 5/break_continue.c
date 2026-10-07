#include <stdio.h>

int main(){
    int count = 10;
    for (int i = 1; i <= count; i++)
    {
        if(i == 5){
            continue; // skip this iteration 
            // break; //exit this loop
        }



        printf("value of i is %d\n",i);
    }
    
    return 0;
}