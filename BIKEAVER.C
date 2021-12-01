#include<stdio.h>
void main()
{
int avg,dist,fuel;
clrscr();
printf("Enter total distance travled");
scanf("%d",&dist);
printf("Enter spent fuel");
scanf("%d",&fuel);
avg=dist/fuel;
printf("The average of bike is = %d",avg);
getch();
}