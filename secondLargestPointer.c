#include<stdio.h>
void bubbleSort(int a[50],int n){
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("second largest no.: %d\n",a[1]);
    printf("second largest no.: %d\n",a[n-2]);
}
void main(){
    int a[50],n;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    bubbleSort(a,n);

}