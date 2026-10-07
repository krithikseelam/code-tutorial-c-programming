#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee krithik = {100, 71.22, "krithik"};
    printf("%d %f %s", krithik.code,krithik.salary,krithik.name);
    return 0;
}