#include<stdio.h>
#include<stdlib.h>
void first();
void second();
void third();
void fourth();
void fifth();
void sixth();
void seventh();
void eighth();
void main(){
int ch=0;
printf("1. merging of 2 unsorted arrays\n");
printf("2. sorting array in ascending order\n");
printf("3. reversing the elements in an array\n");
printf("4. matrix multiplication\n");
printf("5. checking whether matrix is symmetric or not\n");
printf("6. row-wise and column-wise summation of a matrix\n");
printf("7. summation of max and min elements of a matrix\n");
printf("8. summation of left diagonal and right diagonal of a matrix\n");
printf("enter you choice \n");
scanf("%d",&ch);
switch(ch){
case 1:first();
break;
case 2:second();
break;
case 3:third();
break;
case 4:fourth();
break;
case 5:fifth();
break;
case 6:sixth();
break;
case 7:seventh();
break;
case 8:eighth();
break;
default:printf("INVALID INPUT\n");
}
}
void first(){
int a[10];
int b[10];
int c[20];
int p=0;
int n1=0,n2=0;
printf("enter no. of elements in 1st array\n");
scanf("%d",&n1);
printf("enter no. of elements in 1st array\n");
scanf("%d",&n2);
printf("enter 1st array\n");
for(int i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter 2nd array\n");
for(int i=0;i<n2;i++)
scanf("%d",&b[i]);
for(int i=0;i<n1+n2;i++){
if(i<n1){
c[i]=a[i];
}
else{
c[i]=b[p];
p++;
}
}
printf("merged array is:\n");
for(int i=0;i<n1+n2;i++)
printf("%d\t",c[i]);
}
void second(){
int a[10];
int n=0;
printf("enter no. of elements\n");
scanf("%d",&n);
printf("enter elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1]){
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("array sorted in ascending order is:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
void third(){
int a[10];
int n=0;
printf("enter no. of elements\n");
scanf("%d",&n);
int start=0;
int end=n-1;
printf("enter array elements\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\ninputed array:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
while(start<end){
int t=a[start];
a[start]=a[end];
a[end]=t;
start++;
end--;
}
printf("\nreversed array:\n");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
void fourth(){
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;     
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix elements\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix elements\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}            
printf("multiply of the matrix\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}        
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}
}
void fifth(){
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
void sixth(){
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
void seventh(){
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
void eighth(){
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
