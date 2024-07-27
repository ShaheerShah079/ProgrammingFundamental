#include<stdio.h>
int check(int *ptr1, int *ptr2 , int *ptrsum, int *ptrsub , int *ptrmulti)
{
	*ptrsum=*ptr1 + *ptr2;
	*ptrsub=*ptr1 - *ptr2;
	*ptrmulti=*ptr1 * *ptr2;
}
int main()
{
	int num1,num2,sum,sub,multi;
	printf("Enter two number to find their sum,substraction and multipication\n");
	scanf("%d %d",&num1,&num2);
	check(&num1,&num2,&sum,&sub,&multi);
	printf("Sum = %d\n",sum);
	printf("Substraction = %d\n",sub);
	printf("Multiplication = %d\n",multi);
	
	
	return 0;
}
