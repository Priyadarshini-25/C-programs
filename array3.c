#include<stdio.h>
void main(){
int n=0;
int num=0;
int pos=0;
printf("enter size\n");
scanf("%d",&n);
int ar[n+1];
printf("enter elements\n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
printf("original array\n");
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
printf("\nenter element to be inputed\n");
scanf("%d",&num);
printf("enter the position\n");
scanf("%d",&pos);
for(int i=n;i>=pos;i--){
ar[i]=ar[i-1];
}
ar[pos-1]=num;
printf("new array\n");
for(int i=0;i<n+1;i++){
printf("%d ",ar[i]);
}
}

