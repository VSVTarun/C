#include<stdio.h>
void main()
{
 int n,days,year,week,months;
 printf("enter the number of days \n");
 scanf("%d",&n);
 week=(n%30)/7;
 year=n/365;
 months=(n%365)/30;
 days=(n%7);
 printf("year=%d",year);
 printf("months=%d",months);
 printf("week=%d",week);
 printf("days=%d",days);
} 
