#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node* next;
};
void display(struct Node* n);
void push(struct Node** head_ref,int new_data);
void insertAfter(struct Node** prev_node,int new_data);
void append(struct Node** head_ref,int new_data);
void deleteNode(struct Node** head_ref,int position);
void sort(struct Node *start);
void swap(struct Node *a,struct Node *b);


void display(struct Node* n){
while(n!=NULL){
printf("%d",n->data);
n=n->next;
}
}
void push(struct Node** head_ref,int new_data){
struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
new_node->data=new_data;
new_node->next=(*head_ref);
(*head_ref)=new_node;
}
void insertAfter(struct Node** prev_node,int new_data){
if(prev_node==NULL){
printf("the previous node cannot be null\n");
return;
}
struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
new_node->data=new_data;
new_node->next=prev_node->next;
prev_node->next=new_node;
}
void append(struct Node** head_ref,int new_data){
struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
struct Node *last=*head_ref;
new_node->data=new_data;
new_node->next=NULL;
if(*head_ref==NULL){
*head_ref=new_node;
return;
}
while(last->next!=NULL)
last=last->next;
last->next=new_node;
}
void deleteNode(struct Node** head_ref,int position){
if(*head_ref==NULL)
return;
struct Node* temp=*head_ref;
if(position==0){
*head_ref=temp->next;
free(temp);
return;
}
for(int i=0;temp!=NULL&&i<position-1;i++)
temp=temp->next;
if(temp==NULL||temp->next==NULL)
return;
struct Node* next=temp->next->next;
free(temp->next);
temp->next=next;
}
void sort(struct Node *start){
int swapped,i;
struct Node *ptr1;
struct Node *1ptr=NULL;
if(start==NULL)
return;
do{
swapped=0;
ptr1=start;
while(ptr1->next!=1ptr){
if(ptr1->data > ptr1->next->data){
swap(ptr1,ptr1->next);
swapped=1;
}
ptr1=ptr1->next;
}
1ptr=ptr1;
}
}
while(swapped);
}
void swap(struct Node *a,struct Node *b){
int temp=a->data;
a->data=b->data;
b->data=temp;
}
static void reverse(struct Node** head_ref){
struct Node* prev=NULL;
struct Node* current=*head_ref;
struct Node* next;
while(current!=NULL){
next=current->next;
current->=prev;
prev=current;
}
*head_rev=prev;
}
int main(){
struct Node* head=NULL;
int ch=0;
int flag=1;
do{
printf("1. insert at beginning\n");
printf("2. insert at end\n");
printf("3. insert a given position\n");
printf("4. deletion at given position\n")
printf("5. sorting list\n");
printf("6. reversing list\n");
printf("7. display list\n");
printf("enter choice\n");
scanf("%d",&ch);
switch(ch){
case 1:push(&head,3);
display(head);
break;
case 2:append(&head,4);
display(head);
break;
case 3:insertAfter(head->next,5);
display(head);
break;
case 4:deleteNode(&head,3);
display(head);
break;
case 5:sort(&head);
display(head);
break;
case 6:reverse(&head);
display(head);
break;
case 7:display(head);
break;
default:printf("invalid choice inputed\n")
}
printf("continue? 1 for yes 0 for no\n");
scanf("%d",&flag);
}while(flag==1);
return 0;
}
