#include<stdio.h>
#include<math.h>
void main()
{
  float principal,rate,time,emi,T,t,total;
  printf("enter the principal");
  scanf("%f",&principal);
  printf("enter the rate");
  scanf("%f",&rate);
  printf("enter the time");
  scanf("%f",&time);
  rate=rate/100;
  time=time/12;
  t=principal*time;
  t=t*T;
  total =principal+t;
  emi=total/(T*12);
  printf("monthly emi is %f \n",emi);
}
