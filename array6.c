#include<stdio.h>
void main(){
int n=0;
printf("enter size\n");
scanf("%d",&n);
int ar[n];
printf("enter array\n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
printf("original array\n");
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
printf("\narray after deleting from end\n");
for(int i=0;i<n-1;i++){
printf("%d ",ar[i]);
}
}
