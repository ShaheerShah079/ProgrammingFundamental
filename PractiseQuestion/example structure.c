#include<stdio.h>
struct name
{
	int age;
	char *name;
	int salary;
}emp1,emp2;

int manager(int *managers1,int *managers2)
{
	struct name manager;
	manager.age=25;
	manager.salary=76;
  *managers1=manager.age;
  *managers2=manager.salary;
  
}
int main()
{
    int managers1,managers2;
	scanf("%d",&emp1.age);
	scanf("%d",&emp2.age);
	
	printf("%d\n",emp1.age);
	printf("%d\n",emp2.age);
	manager(&managers1,&managers2);
		
	printf("%d %d",managers1,managers2);
	return 0;
}
