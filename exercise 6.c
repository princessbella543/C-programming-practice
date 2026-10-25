#include<stdio.h>
 int main(){

  float radius,area,circumference;
  const float PI=3.14159f;

       printf("enter the radius:");
       scanf("%f",&radius);

       area=PI*radius*radius;
       circumference=2*PI*radius;

       printf("area=%.2f\n",area);
       printf("circumference=%.2f\n",circumference);

       return 0;
 }
