#include<stdio.h>
#include<stdlib.h>
void main(){
int a[10];
int n=0;
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1]){
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("array sorted in ascending order is:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
