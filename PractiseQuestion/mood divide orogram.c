#include<stdio.h>
union abc
{
	int a;
	float b;
	char c;
};
int main()
{
	union abc a[6];
	a[0].a=10;
	a[1].b=10.2;
	a[2].c='A';
	a[3].a=15;
	a[4].b=12.12;
	a[5].c='B';
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}
