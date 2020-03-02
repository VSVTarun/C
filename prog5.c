#include <stdio.h>
void main()
{
  int bs;
  float da,ha,total;
  printf("enter the basic salary");
  scanf("%d",&bs);
  da = (0.2)*bs;  
  ha = (0.4)*bs;
  total = bs+da+ha;
  printf("total salary = %f",total);
}
