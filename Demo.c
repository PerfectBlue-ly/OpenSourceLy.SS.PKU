#include<stdio.h>

void main() 
{

	int number = 1;
	int* pointer = &number;

	printf("number的地址%p\n",&number);
	printf("number的地址%p\n", pointer);
	printf("pointer的地址%p\n", &pointer);
	printf("pointer所指向的值%d", *pointer);

}