#include <stdio.h>

void main(){
    float angle,x,t1,t2,t3,t4,t5,sin;
    printf("Enter the angle in degress to find sin(x):\n");
    scanf("%f",&angle);
    x = 3.14*angle/180;
    t1 = x;
    t2 = t1*(x*x/(3*2));
    t3 = t2*(x*x/(4*5));
    t4 = t3*(x*x/(6*7));
    t5 = t4*(x*x/(8*9));
    sin = t1-t2+t3-t4+t5;
    printf("\nThe value of sin(x) is : %f",sin);
}