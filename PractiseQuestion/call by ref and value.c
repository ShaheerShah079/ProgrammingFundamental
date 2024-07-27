#include<stdio.h>
int add(int *a,int *b)
{
	int t1,t2;
	t1=*a + *b;
	t2=*a * *b;
	*a=t1;
	*b=t2;
}
int main()
{
	int a=10,b=20;
	add(&a,&b);
	printf("%d\n",a);
	printf("%d\n",b);
	//printf("%d\n",mul);
	return 0;
}
