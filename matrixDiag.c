#include<stdio.h>
#include<stdlib.h>
void main(){
int m=0;
int a[10][10];
int sum=0;
int suml=0,sumr=0;
printf("enter no. of rows and columns of matrix\n");
scanf("%d",&m);
printf("enter elements\n");
for(int i=0;i<m;i++){
for(int j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
printf("\nmatrix is: \n");
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
if(i==j){
suml+=a[i][j];
}
}
}
printf("\nsum of left diagonal is %d\n",suml);
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
if(i+j==m-1){
sumr+=a[i][j];
}
}
}
printf("\nsum of right diagonal is %d\n",sumr);
}
