#include<stdio.h>
#include<stdlib.h>

int func(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            if(i<n/2)
            return 1;
            else
            return 2;
            
        }
    }
    return 0;
}

void main(){
    int arr[100],key,n,x;
    printf("enter no. of elements to be inputed\n");
    scanf("%d",&n);
    printf("enter elements \n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("array is \n");
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\nenter search element\n");
    scanf("%d",&key);
    x=func(arr,n,key);
    printf("%d\n",x);


}