#include <stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    // typedef int krithik;
    // krithik a = 88;
    // printf("The value of krithik is %d \n", a);
    // typedef struct employee Emp;
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "krithik");
    e1.salary = 54.44;


    printf("%d %f %s\n", e1.code,e1.salary,e1.name);
    return 0;
}