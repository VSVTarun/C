#include<stdio.h>
#include<math.h>
void main()
{
 int n,i,flag=1;
 printf("enter any number");
 scanf("%d",&n);
 for (i=2; i<=sqrt(n);i++)
 {
 if (n%i==0)
 {
 flag=0;
 break;
 }
} 

 if (flag==1)
 {
 printf("%d is a prime number",n);
 }
 else
 {
 printf("%d is not a prime number",n);
}
} 
