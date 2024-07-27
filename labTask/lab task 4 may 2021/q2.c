#include<stdio.h>
int main()
{
	int *ptr1=NULL,*ptr2=NULL,*ptr3=NULL;
    int num1,num2;
	num1=&ptr1;
	num2=&ptr2;
	ptr3=num1+num2;
	printf("The address of pointer 1 is %p\n",&ptr1);
	printf("The Address of pointer 2 is %p\n",&ptr2);
	printf("The sum of these two pointer are %p",ptr3);
	return 0;
}
