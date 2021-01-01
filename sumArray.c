#include<stdio.h>
void main(){
    int a1[100],a2[100],a3[100],n;
    printf("enter no. of elements to be inputed\n");
    scanf("%d",&n);
    printf("enter 1st array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a1[i]);
    printf("enter 2nd array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a2[i]);

    for(int i=0;i<n;i++){
        int *a,*b;
        a=&a1[i];
        b=&a2[i];
        a3[i]=*a1+*a2;
    }
    printf("array after addition\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a3[i]);
    

}