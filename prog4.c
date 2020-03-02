#include<stdio.h>
void main()
{
 int a1,a2,a3,a4,a5,total;
 float avg;
 printf("enter the subjects \n");
 scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
 total=a1+a2+a3+a4+a5;
 avg=total/5;
 printf("total=%d,avg=%f \n",total, avg);
}
