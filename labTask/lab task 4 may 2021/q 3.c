#include<stdio.h>
int main()
{
	int i=3;
	int *ptr1=NULL,**ptr2=NULL,***ptr3=NULL,****ptr4=NULL,*****ptr5=NULL;
	ptr1=&i;
	ptr2=&ptr1;
	ptr3=&ptr2;
	ptr4=&ptr3;
	ptr5=&ptr4;
	printf("The address of variable i is %x and value store in pointer 1 is %x\n",&i,ptr1);
	printf("The address of pointer 1 is %x and value store in pointer 2 is %x\n",&ptr1,ptr2);
	printf("The address of pointer 2 is %x and value store in pointer 3 is %x\n",&ptr2,ptr3);
	printf("The address of pointer 3 is %x and value store in pointer 4 is %x\n",&ptr3,ptr4);
	printf("The address of pointer 4 is %x and value store in pointer 5 is %x\n\n",&ptr4,ptr5);
	
	printf("referncing the variable i through pointer 1 is %d\n",*ptr1);
	printf("referncing the variable i through pointer 2 is %d\n",**ptr2);
	printf("referncing the variable i through pointer 3 is %d\n",***ptr3);
	printf("referncing the variable i through pointer 4 is %d\n",****ptr4);
	printf("referncing the variable i through pointer 5 is %d\n",*****ptr5);
	return 0;
}
