#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    e1.code = 56;
    // now we can print structure elements using:
    printf("%d", (*ptr).code);
    printf("%d", ptr->code);// exactly same as (*ptr).code
    return 0;
}   