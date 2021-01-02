#include<stdio.h>
int main(){
int n=0;
int num=0;
printf("enter size of array\n");
scanf("%d",&n);
int ar[n+1];
ar[0]=0;
printf("enter array elements\n");
for(int i=1;i<n+1;i++){
scanf("%d",&ar[i]);
}
printf("array original\n");
for(int i=1;i<(n+1);i++){
printf("%d ",ar[i]);
}
printf("enter element to be inputed in the beginning\n");
scanf("%d",&num);
ar[0]=num;
printf("new array:\n");
for(int i=0;i<n+1;i++){
printf("%d ",ar[i]);
}
}
