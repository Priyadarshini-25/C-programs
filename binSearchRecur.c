#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x);
void bubbleSort(int arr[],int n);

int binarySearch(int arr[], int l, int r, int x)
{ 
   if (l<=r) 
   { 
        int mid =(l+r)/2; 

        if (arr[mid] == x)
         return mid; 
  
        if (arr[mid] > x)
        return binarySearch(arr, l, mid-1, x); 
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   return -1; 
} 

void bubbleSort(int arr[],int n)
{
   //bubble sort
   for(int i=0;i<n-1;i++)
   {
      for(int j=0;j<n-1-i;j++)
      {
         if(arr[j]>arr[j+1])
         {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
         }
      }
   }

   printf("sorted array is \n");
   for(int i=0;i<n;i++)
   printf("%d\t",arr[i]);
   printf("\n");

}
int main()
{
   int n=5;
   int arr[5];
   printf("enter 5 elements\n");
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);

   
   int srch=0;
   printf("enter search element\n");
   scanf("%d",&srch);

   bubbleSort(arr,5);
   int ans=binarySearch(arr,0,n-1,srch);
   if (ans==-1)
   printf("search unsuccessful,element doesnt exist in array\n");
   else
   printf("search successful,element found at = %d\n",ans);
   return 0;

}