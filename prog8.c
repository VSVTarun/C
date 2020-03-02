#include<stdio.h>
#include<math.h>
void main()
{
  int x1,x2,y1,y2,z1,z2;
float dist;
  printf("enter the co ordinates of first point \n");
  scanf("%d%d%d",&x1,&y1,&z1);
  printf("enter the co ordinates of second point \n");
  scanf("%d%d%d",&x2,&y2,&z2);
  dist = sqrt (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1);
  printf("the distnce between two points = %f \n",dist);
}
