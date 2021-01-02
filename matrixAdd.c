#include<stdio.h>
#include<stdlib.h>
void main(){
int r=0,c=0;
printf("enter no. of rows\n");
scanf("%d",&r);
printf("enter no. of columns\n");
scanf("%d",&c);
int a[r][c];
int b[r][c];
int add[r][c];
printf("enter first matrix\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d",&a[i][j]);
}
}
printf("enter second matrix\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d",&b[i][j]);
}
}
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
add[i][j]=0;
add[i][j]=a[i][j]+b[i][j];
}
}
printf("added matrix is\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
printf("%d\t",add[i][j]);
}
printf("\n");
}
}
