#include <stdio.h>
void main ()
{
int num,n1,n2,n3,a,b;
clrscr();
printf("Enter 3 digit number");
scanf("%d",&num);
b=num;
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;

a=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);

if(b==a)
{
printf("This number is amstrong number");
}
else
{
printf("This number is not amstrong number");
}
getch();
}