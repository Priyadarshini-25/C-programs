#include<stdio.h>
void main(){
int n=0;
int pos=0;
printf("enter size\n");
scanf("%d",&n);
int ar[n];
printf("enter elements\n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
printf("original array\n");
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
printf("\nenter element position to be deleted\n");
scanf("%d",&pos);
for(int i=pos;i<n-1;i++){
ar[i]=ar[i+1];
}
printf("new array\n");
for(int i=0;i<n-1;i++){
printf("%d ",ar[i]);
}
}

