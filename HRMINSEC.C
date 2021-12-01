#include<stdio.h>
void main()
{
int a,b,hours,min;
clrscr();
printf("Enter the seconds");
scanf("%d",&a);
b=a/60;
hours=b/60;
min=b-60;
printf("hours = %d",hours);
printf("\nmin=%d",min);
getch();
}