#include<stdio.h>
void main()
{
  int n,a,c=0,r,s=0;       
  printf("enter the number");
  scanf("%d",&n);
 
  while(n!=0)
  {
    r=n%10;
    c=(c*10)+r;
    n=n/10;
  }
  
  while(c!=0)
  {
    r=c%10;
    a=r+1;
    s=(s*10)+a;
    c=c/10;
   }
    printf("the number is = %d \n",s);

} 
    



