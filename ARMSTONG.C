   #include<stdio.h>
   void main()
   {
   int num,s,d1,n1;
   clrscr();
   printf("Enter n digit number");
   scanf("%d",&num);
   n1=num;
   s=0;
   while(num>0)
   {
   d1=num%10;

   s=s+(d1*d1*d1);

   num=num/10;

   }
  printf("%d",s);

   if(n1==s)
   {

   printf("it is armstrong");
   }
   else
   {
   printf("it is not armstrong");
   }
      getch();

   }