#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
 

void removeLoop(struct Node*, struct Node*);
 

int detectAndRemoveLoop(struct Node* list)
{
    struct Node *l1 = list, *l2 = list;
 
    while (l1 && l2 && l2->next) 
    {
        l1 = l1->next;
        l2 = l2->next->next;
 
        
        if (l1 == l2) {
            removeLoop(l1, list);
 
            //1 means loop detected
            return 1;
        }
    }
 
    //0 means no loop detected
    return 0;
}
 

void removeLoop(struct Node* loop_node, struct Node* head)
{
    struct Node* ptr1;
    struct Node* ptr2;
 

    ptr1 = head;
    while (1) {
      
        ptr2 = loop_node;
        while (ptr2->next != loop_node
               && ptr2->next != ptr1)
            ptr2 = ptr2->next;
 
  
        if (ptr2->next == ptr1)
            break;
 
    
        ptr1 = ptr1->next;
    }
 
    ptr2->next = NULL;
}
 
void printList(struct Node* node)
{
    while (node != NULL) {
        printf("%d  ", node->data);
        node = node->next;
    }
}
 
struct Node* newNode(int key)
{
    struct Node* temp
        = (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
 
int main()
{
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(2);
 
    //Create a loop for testing,comment it out to not create loop

    head->next->next->next->next->next = head->next->next;
 
    if(detectAndRemoveLoop(head)==1)
    {
        printf("loop present= true\nLinked List after removing loop \n");
        printList(head);
    }
    else
    {
        printf("loop present= false\n linked list is: \n");
        printList(head);
    }
    
}