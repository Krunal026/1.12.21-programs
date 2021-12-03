#include <stdio.h>
void main ()
{int n1,n2,n3,n4,n5,n,total;
clrscr();
printf("Add number 1");
scanf("%d",&n1);
printf("Add number 2");
scanf("%d",&n2);
printf("Add number 3");
scanf("%d",&n3);
printf("Add number 4");
scanf("%d",&n4);
printf("Add number 5");
scanf("%d",&n5);
if(n1%2!=0)
{
total=total+n1;
}
if(n2%2!=0)
{
total=total+n2;
}
if(n3%2!=0)
{
total=total+n3;
}
if(n4%2!=0)
{
total=total+n4;
}
if(n5%2!=0)
{
total=total+n5;
}
printf("%d",total);
getch();
}

