#include <stdio.h>
void main ()
{
float w1,w2,p1,p2,avg;
clrscr();
printf("enter the weight of iteam 1");
scanf("%f",&w1);
printf("enter the weight of iteam 2");
scanf("%f",&w2);
printf("purchase of iteam 1");
scanf("%f",&p1);
printf("purchasae of iteam 2");
scanf("%f",&p2);
avg=(((w1*p1)+(w2*p2))/(p1+p2));
printf("\nAverage value = %f", avg);
getch();

}