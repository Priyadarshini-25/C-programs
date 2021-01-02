#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,size,i;
printf("enter size of the array\n");
scanf("%d",&size);
p=(int*)malloc(size*sizeof(int));
printf("enter elements\n");
for(i=0;i<size;i++)
scanf("%d",(p+i));
printf("entered array elements are: \n");
for(i=0;i<size;i++)
printf("%d,",*(p+i));
printf("\n");
free(p);
return 0;
}
