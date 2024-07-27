#include<stdio.h>
#pragma pack(1)
struct student
{
	char fname;
	int id;
	char name;

	
};
int main()
{
struct student a;
printf("%d",sizeof(a));
return 0;	
}
