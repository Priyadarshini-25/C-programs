#include<stdio.h>
#include<stdlib.h>
void main(){
int m=0,n=0;
int a[10][10];

printf("enter no. of rows and columns of square matrix\n");
scanf("%d%d",&m,&n);
printf("enter elements\n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("\nmatrix is: \n");
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
int max=a[0][0],min=a[0][0];
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(a[i][j]>max){
max=a[i][j];
}
}
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(a[i][j]<min){
min=a[i][j];
}
}
}
printf("max=%d,min=%d\n",max,min);
printf("sum is %d\n",(max+min));
}
