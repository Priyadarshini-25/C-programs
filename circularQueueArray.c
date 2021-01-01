# include<stdio.h>
# define MAX 10

int arr[MAX];
int f = -1;
int r = -1;

void insert(int item)
{
	if((f == 0 && r == MAX-1) || (f == r+1))
	{
		printf("Queue Overflow \n");
		return;
	}
	if (f == -1)  
	{
		f = 0;
		r = 0;
	}
	else
	{
		if(r == MAX-1)
			r = 0;
		else
			r = r+1;
	}
	arr[r] = item ;
}

void delete()
{
	if (f == -1)
	{
		printf("Queue Underflow\n");
		return ;
	}
	printf("Element deleted from queue is : %d\n",arr[f]);
	if(f == r) 
	{
		f = -1;
		r=-1;
	}
	else
	{	
		if(f == MAX-1)
			f = 0;
		else
			f = f+1;
	}
}

void display()
{
	int front_pos = f,rear_pos = r;
	if(f == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
		while(front_pos <= rear_pos)
		{
			printf("%d ",arr[front_pos]);
			front_pos++;
		}
	else
	{
		while(front_pos <= MAX-1)
		{
			printf("%d ",arr[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{
			printf("%d ",arr[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d", &item);

				insert(item);
				break;
			case 2 :
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
	}while(choice!=4);
	
	return 0;
}
