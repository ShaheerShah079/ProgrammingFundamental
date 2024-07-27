#include<stdio.h>
int main()
{
	int i=0;
	char a;
	printf("Enter a variable to print their next 5 variables\n");
	scanf("%c",&a);
	printf("Next 5 variable are given below\n");
	while(i<5)
	{
	    a++;
		printf("%c\t",a);
		i++;
	}
	return 0;
}
