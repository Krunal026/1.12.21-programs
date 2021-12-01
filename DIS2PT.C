#include<stdio.h>
void main()
{
float p1,p2,dis;
clrscr();
printf("Enter the value of point one");
scanf("%f",&p1);
printf("Enter the value of point two");
scanf("%f",&p2);
dis=p2-p1;
printf("Distance between two points is = %f",dis);
getch();
}