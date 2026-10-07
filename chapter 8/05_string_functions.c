#include <stdio.h>
#include<string.h>

int main(){
    char st[] = "Krithik";
    char a1[56] = "krithik";
    char a2[56] = "bhai";

    // printf("%d",strlen(st));

    char target[30];
    // strcpy (target,st); //target now contains "krithik"
    // printf("%s %s",st,target);

    strcat(a1,a2); // ai now contains "krithikbhai" <no space in between>
    printf("%s %s",a1,a2); 

    int a = strcmp("far", "ajoke"); // if 1st word comes first in dictonary(ASCII value table) then -ve other wise +ve
    //DJ is negative JD is positive
    printf("%d",a);

    return 0;
}