#include<stdio.h>
void first();
void second();
void third();
void fourth();
void fifth();
void sixth();
void main(){
int ch=0;
int yn=1;

while(yn==1){
printf("\n1. to insert at beginning\n");
printf("2. to insert at end\n");
printf("3. to insert at given position");
printf("4. to delete from beginning\n");
printf("5. to delete from end\n");
printf("6. to delete from given position\n");
printf("enter choice\n");
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
default:printf("invalid input\n");
}
printf("\ndo you want to continue?1 for yes,0 for no\n");
scanf("%d",&yn);
}
}
void first(){
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
void second(){
int n=0;
int num=0;
printf("enter size of array\n");
scanf("%d",&n);
int ar[n+1];
ar[n]=0;
printf("enter array elements\n");
for(int i=0;i<n;i++){
scanf("%d",&ar[i]);
}
printf("array original\n");
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
printf("enter element to be inputed in the end\n");
scanf("%d",&num);
ar[n]=num;
printf("new array:\n");
for(int i=0;i<n+1;i++){
printf("%d ",ar[i]);
}
}
void third(){
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
void fourth(){
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
printf("\narray after deleting from beginning\n");
for(int i=1;i<n;i++){
printf("%d ",ar[i]);
}
}
void fifth(){
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
void sixth(){
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



