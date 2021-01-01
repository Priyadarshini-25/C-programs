/*In case with the pointers - if any pointer does not contain a valid memory address or any pointer
 is uninitialized, known as "NULL pointer". We can also assign 0 (or NULL) to make a pointer as
  "NULL pointer"*/

#include<stdio.h>
void main(){
    int num = 10;

	int *ptr1 = &num;
	int *ptr2;
	int *ptr3=0;

	if(ptr1 == 0)
		printf("ptr1: NULL\n");
	else
		printf("ptr1: NOT NULL\n");

	if(ptr2 == 0)
		printf("ptr2: NULL\n");
	else
		printf("ptr2: NOT NULL\n");

	if(ptr3 == 0)
		printf("ptr3: NULL\n");
	else
		printf("ptr3: NOT NULL\n");
}