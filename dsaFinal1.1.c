#include <stdio.h>
#include<stdlib.h>
 
#define MAX 100
 
void insert();
void delete();
void display();

int qarr[MAX];
int r = - 1;
int f = - 1;
void main()
{
    int ch;
    while (1)
    {
        printf("1.insert element to queue (from front) \n");
        printf("2.delete element from queue (from front) \n");
        printf("3.display all elements of queue (front to rear) \n");
        printf("4.exit \n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("enter valid option\n");
        } 
    } 
} 
 
void insert()
{
    int data=0;
    if (r == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (f == - 1)
        f = 0;

        printf("Insert the element in queue : ");
        scanf("%d", &data);
        r+=1;
        qarr[r] = data;
    }
}
 
void delete()
{
    if (f==-1 || f>r)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", qarr[f]);
        f+=1;
    }
}
 
void display()
{
    if (f == -1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (int i=f;i<=r;i++)
            printf("%d ", qarr[i]);
        printf("\n");
    }
}