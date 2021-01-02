#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,i,n,sum=0;
printf("enter size\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
if(p==NULL){
printf("error! memory not allocated\n");
exit(0);
}
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
sum+=*(p+i);
}
printf("sum= %d",sum);
free(p);
return 0;
}

