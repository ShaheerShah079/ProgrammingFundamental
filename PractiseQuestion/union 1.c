#include<stdio.h>
union data
{
	int a;
	char b;
	float c;
};
int main()
{
	union data arr[10];
   printf("%d\n",sizeof(a));
	arr[0].a=6;
	arr[1].b='A';
	arr[2].c=7.6;
	int i;
	//for(i=0;i<3;i++)
	//{
		printf("%d   %c   %.2f",arr[0],arr[1],arr[2].c);
	//}
	
	return 0;
}
// also use this example with the sturucture but they waste memory
