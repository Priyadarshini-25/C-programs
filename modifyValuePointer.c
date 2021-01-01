#include <stdio.h>

void main() {
	int num = 10;
	int *ptr = &num;

    //original value
	printf("value of num: %d\n", num);
	printf("value of num: (using pointer): %d\n", *ptr);

	
	*ptr = 20;
    //changed value
	printf("value of num: %d\n", num);
	printf("value of num (using pointer): %d\n", *ptr);

	
}