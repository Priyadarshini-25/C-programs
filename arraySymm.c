#include<stdio.h>
#include<stdlib.h>
void main(){
int n=0;
int a[10][10];
int flag=0;
printf("enter no. of rows of square matrix\n");
scanf("%d",&n);
printf("enter elements\n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("\nmatrix is: \n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
//checking
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(a[i][j]!=a[j][i]){
flag=1;
break;
}
}
}
if(flag==1)
printf("not a symmetric matrix\n");
else
printf("symmetric matrix\n");
}
