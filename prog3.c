#include<stdio.h>
void main()
{
 int n,r,s=0;
 printf("enter the number \n");
 scanf("%d", &n);
 while(n!=0)
 {
   r=n%10;
   n=n/10;
   s=s+r;
 }
 printf("the sum is =%d\n",s);
}
