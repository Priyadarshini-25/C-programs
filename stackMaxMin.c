#include<stdio.h>
#include<process.h>
#include<stdlib.h>
 
#define MAX 5	//Maximum number of elements that can be stored
 
int top=-1,stack[MAX];
void push();
void pop();
void maxmin();
void display();
 
void main()
{
	int ch;
	
	while(1)	//infinite loop, will end when choice will be 4
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1. Push\n2. Pop\n3. Display\n4. MaxMin\n5. Exit\n");
		printf("\n\nEnter your choice(1-5):\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
            case 4: maxmin();
                    break;        
			case 5: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
 
void push()
{
	int val;
	
	if(top==MAX-1)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
 
void pop()
{
	if(top==-1)
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top]);
		top=top-1;
	}
}

void maxmin()
{
    int max=stack[0],min=stack[0];
    if(top==-1)
    printf("stack is empty\n");
    else
    {
        for(int i=0;i<=top;i++)
        {
            if(stack[i]>max)
            max=stack[i];
        }

        for(int i=0;i<=top;i++)
        {
            if(stack[i]<min)
            min=stack[i];
        }
        printf("max= %d\tmin= %d\n",max,min);
    }
    
}
 
void display()
{
	int i;
	
	if(top==-1)
	{
		printf("\nStack is empty!!");
	}
	else
	{
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
			printf("%d\n",stack[i]);
	}
}