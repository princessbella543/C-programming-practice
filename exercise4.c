#include<stdio.h>
  int main(){
  int a ,b;
  printf("enter the first interger;");
  scanf("%d",&a);
  printf("enter the second interger;");
  scanf("%d",&b)

  printf("sum=%d\n",a+b);
  printf("difference=%d\n",a-b);
  printf("product=%d\n",a*b);

   if (b!=0)
   {

       printf("quotient=%.5f\n",(double)a/b);

   }
   else
   {
       prinf("cannot  divide by zero.\n");
   }
   return 0;
  }
