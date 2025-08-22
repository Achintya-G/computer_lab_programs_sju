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

    printf("Time \t | Distance\n");
    printf("---------------------\n");

    for (int t=1;t<=5;t++){
        float d = u*t + 0.5*a*t*t;
        printf("%d \t | %.2f\n",t,d);
    }

}
