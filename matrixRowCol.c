#include<stdio.h>
#include<stdlib.h>
void main(){
int m=0,n=0;
int a[10][10];
int sum=0;
printf("enter no. of rows and columns of matrix\n");
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
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
sum+=a[i][j];
}
printf("sum of %d row is=%d\n",(i+1),sum);
sum=0;
}
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
sum+=a[j][i];
}
printf("sum of %d column is=%d\n",(i+1),sum);
sum=0;
}
}
