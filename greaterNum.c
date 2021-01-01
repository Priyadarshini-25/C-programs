#include<stdio.h>
void main()
{
 int x,y, *large, *xp,*yp;
printf("Enter the value of x and y :\n");
scanf("%d%d",&x,&y);
xp=&x;
yp=&y;
if(*xp>*yp)
large=xp;
else
large=yp;
printf("The largest nmuber is : %d",*large);
}