#include<stdio.h>
int main()
{
	int a= 71;
	int b=75;
	int *ptra=&a;
	int *ptrb=&b;
	printf("0 %d\n",ptra);
	printf("1 %d\n",ptra+1);
	printf("2 %d\n",ptra+2);
	printf("3 %d\n",ptra+3);
	printf("-1 %d\n",ptra-1);
	printf("-2 %d\n",ptra-2);
	printf("++ %d\n",++ptra);
	printf("%d",ptra);
	return 0;
}

