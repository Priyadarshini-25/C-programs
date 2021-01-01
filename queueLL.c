#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int info;
    struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
void insert(int data);
void delete();
void empty();
void display();
void create();
void queueSize();
 
int count = 0;
 
void main()
{
    int no, ch, e;
 
    printf("\n 1. insertion");
    printf("\n 2. deletion");
    printf("\n 3. front element");
    printf("\n 4. empty");
    printf("\n 5. exit");
    printf("\n 6. display");
    printf("\n 7. size");
    create();
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            insert(no);
            break;
        case 2:
            delete();
            break;
        case 3:
            e = frontelement();
            if (e != 0)
                printf("Front element : %d", e);
            else
                printf("\n No front element in Queue as queue is empty");
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            queueSize();
            break;
        default:
            printf("Wrong choice ");
            break;
        }
    }
}
 
void create()
{
    front = rear = NULL;
}
void queueSize()
{
    printf("\n Queue size : %d", count);
}
 

void insert(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp=(struct node *)malloc(1*sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;
 
        rear = temp;
    }
    count++;
}
 
void delete()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\n Error: Trying to display elements from empty queue");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\n Deleted value : %d", front->info);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Deleted value : %d", front->info);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

void display()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}
 
int frontelement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->info);
    else
        return 0;
}
 
void empty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\n Queue empty");
    else
       printf("Queue not empty");
}