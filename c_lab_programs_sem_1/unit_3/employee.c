/*
A program to enter detail of an employee and calculate gross and net salary.
<name>
<date>
employee.c
*/

#include <stdio.h>

void main(){
    char name[20];
    int eID;
    float basicSal,DA,HRA,grossSal,netSal,IT;

    printf("Program to enter detail of an employee and calculate gross and net salary.");

    printf("Enter name, employee ID and basic salary of employee : \n");
    scanf("%s %d %f",name,&eID,&basicSal);

    DA = (30.0/100.0) * basicSal;
    HRA = (15.0/100.0) * basicSal;
    grossSal = basicSal + DA + HRA;

    if (grossSal > 40000){
        IT = (25.0/100.0) * basicSal;
    }else if (grossSal > 10000){
        IT = (15.0/100.0) * basicSal;
    }else{
        IT = 500;
    }

    netSal = grossSal - IT;

    printf("For employee %s,%d, \nGross Salary = %.2f\nNet Salary = %.2f",name,eID,grossSal,netSal);
}