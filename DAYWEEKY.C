#include<stdio.h>
void main()
{
int days, weeks, years;
clrscr();
printf("enter number of days");
scanf("%d",&days);
years=days/365;
weeks=(days%365)/7;
days=days-((years*365)+(weeks*7));
printf("years=%d\n weeks=%d\n days=%d\n", years,weeks,days);
getch();
}
