#include<stdio.h>
int main(){
int n=0;
int num=0;
printf("enter size of array\n");
scanf("%d",&n);
int ar[n+1];
ar[n]=0;
printf("enter array elements\n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
printf("array original\n");
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
printf("enter element to be inputed in the end\n");
scanf("%d",&num);
ar[n]=num;
printf("new array:\n");
for(int i=0;i<n+1;i++){
printf("%d ",ar[i]);
}
}
