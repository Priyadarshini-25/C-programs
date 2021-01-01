#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n);
void bubble_sort(int arr[],int n);
void binarySearch(int arr[], int l, int r, int x);
void linearSearch(int arr[], int n, int x);

void main()
{
    int n=0,srch=0,ch=0,ans=0;
    printf("enter number of elements to be inserted:\n");
    scanf("%d",&n);
    int arr[100];
    printf("Enter elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    while(1)
   {

    printf("enter element to be searched: \n");
    scanf("%d",&srch);

    printf("Choose preferred search technique (1/2): \n");
    printf("1. Linear Search\n");
    printf("2. Binary Search\n");
    printf("3. Display array\n");
    printf("Enter your Choice : \n");
    scanf("%d",&ch);

    switch(ch)
     {
    case 1:
        linearSearch(arr,n,srch);
        break;
    case 2:
        bubble_sort(arr,n);
        binarySearch(arr,0,n,srch);
        break;
    case 3:
        display(arr,n);  
        break;     
    default:
        printf("\nINVALID CHOICE\n");
     }
     
     printf("do you wish to continue? 1 for yes, 0 for no\n");
     scanf("%d",&ans);
     if(ans==1)
     continue;
     else
     break;
   
     
  }
}

void bubble_sort(int arr[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++)
   {
      for(j=0;j<n-i-1;j++)
       {
          if(arr[j]>arr[j+1])
           {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
           }
       }
   }
}

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
   {
        printf(" %d ",arr[i]);
   }

}

void binarySearch(int arr[], int l, int r, int x) 
{ 
    int flag=0,pos=0;
    while (l <= r) { 
        int m = (l+r)/2; 
  
        if (arr[m] == x) {
            flag=1;
            pos=m;
            break;
        }
             
  
        if (arr[m] < x) 
            l = m; 
  
        else
            r = m; 
    } 
    if(flag==1)
    printf("search successful: element %d found at position %d\n",x,pos);
    else
    printf("seach unsuccessful: element not present in array\n"); 
}

void linearSearch(int arr[], int n, int x) 
{ 
    int flag=0,pos=0; 
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        { pos=i;
          flag=1;
          break;
        }
    }
    if(flag==1)
    printf("search successful: element %d found at position %d\n",x,pos);
    else
    printf("seach unsuccessful: element not present in array\n");
}

