/*
A program to convert celsius to fahrenheit and display in tabular form
<name>
<date>
cTofTabular.c
*/

#include <stdio.h>

void main()
{
    float c,f;
    printf("Celsius | Fahrenheit\n");
    printf("---------------------\n");
    for (c=0;c<=100;c+=10){
        f = c*(9.0/5.0)+32;
        printf("%.2f \t| %.2f\n",c,f);
    }

}
