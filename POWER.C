#include<stdio.h>
void main()
{
int x,y,r=1,i;
clrscr();
printf("enter the value of of x and y");
scanf("%d%d",&x,&y);
i=1;
while(i<=y)
{

r=r*x;
i++;
}
printf("%d",r);
getch();
}