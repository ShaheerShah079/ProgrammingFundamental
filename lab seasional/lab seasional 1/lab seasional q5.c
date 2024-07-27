#include<stdio.h>
int main()
{
int a,i;
printf("Enter a number to check weather it it prime or not\n");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0&&a!=i)
	{
		printf("Not a prime number\n");
		break;
	}
if (a%i==0&&a==i)
{
printf("prime num is %d\n",a);
}
}

return 0;
}

