#include<stdio.h>
#include<stdlib.h>
void main(){
int a[10];
int n=0;
printf("enter no. of elements\n");
scanf("%d",&n);
int start=0;
int end=n-1;
printf("enter array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\ninputed array:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
while(start<end){
int t=a[start];
a[start]=a[end];
a[end]=t;
start++;
end--;
}
printf("\nreversed array:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
