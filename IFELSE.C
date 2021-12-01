#include<stdio.h>
void main()
{
int a,r;
clrscr();
printf("enter any number");
scanf("%d",&a);
r=a%4;
if(r==0)
{
printf("number is divisible by 4");
}
else
{
printf("number is not divisible by 4");
}
getch();
}