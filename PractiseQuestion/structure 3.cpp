#include<stdio.h>
struct mark
{
	char name[10];
	int marks;
};
int main()
{
	struct mark s1={"shaheer",100};
	struct mark s2;
	s2=s1;
	printf("s1 is %s  %d\n",s1.name,s1.marks);
	printf("s2 is %s  %d\n",s2.name,s2.marks);
	printf("size :%d",sizeof(s1));
	return 0;
}
