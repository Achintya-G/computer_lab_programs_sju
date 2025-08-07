/*
A program to find the distance travelled by an object for 5 hours.
<name>
<date>
distTravelled.c
*/

#include <stdio.h>

void main()
{
    int u,a,t;

    printf("Enter Velocity, Acceleration of object:");
    scanf("%d %d",&u,&a);

    for (int i=1;i<=5;i++){
        float d = u*i + 0.5*a*i*i;
        printf("Distanced travelled in %d hours is : %.2f\n",i,d);
    }

}
