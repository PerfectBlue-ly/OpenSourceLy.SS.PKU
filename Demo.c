#include<stdio.h>

void main() 
{

	int number = 1;
	int* pointer = &number;

	printf("number�ĵ�ַ%p\n",&number);
	printf("number�ĵ�ַ%p\n", pointer);
	printf("pointer�ĵ�ַ%p\n", &pointer);
	printf("pointer��ָ���ֵ%d", *pointer);

}