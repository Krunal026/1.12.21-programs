   #include<stdio.h>
   void main()
   {
   int num,s,d1,rev;

   clrscr();
   printf("Enter n digit number");
   scanf("%d",&num);
   s=0;
   while(num>0)
   {
   d1=num%10;

   s=s*10+d1;

   num=num/10;

   }
  printf("%d",s);

      getch();

   }