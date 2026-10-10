#include <stdio.h>

int main(){
    char ch;
    FILE *ptr;
    ptr = fopen("krithik.txt","r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c\n",ch);

        if(ch == EOF){
            break;
        }
    }
    
    return 0;
}