#include<stdio.h>
#include<stdlib.h>
void main(){
int a[10];
int b[10];
int c[20];
int p=0;
int n1=0,n2=0;
printf("enter no. of elements in 1st array\n");
scanf("%d",&n1);
printf("enter no. of elements in 1st array\n");
scanf("%d",&n2);
printf("enter 1st array\n");
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter 2nd array\n");
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);
for(int i=0;i<n1+n2;i++){
if(i<n1){
c[i]=a[i];
}
else{
c[i]=b[p];
p++;
}
}
printf("merged array is:\n");
for(int i=0;i<n1+n2;i++)
printf("%d\t",c[i]);
}
