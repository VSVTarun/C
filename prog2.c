#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter two numbers \n");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("a=%d\n",a);
 printf("b=%d\n",b);
}
