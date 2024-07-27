#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char fname[20];
	int age;
	char gender[20];
};

struct student printed(struct student *ptr)
{
	
		printf("Student Id is %d\n",ptr->id);
		printf("Student name is %s\n",ptr->name);
		printf("Student father name is %s\n",ptr->fname);
		printf("Student age is %d\n",ptr->age);
		printf("Student gender M/F is %s\n",ptr->gender);
	    printf("\n\n");
}
int main()
{
struct student s1;

		printf("Enter id of student\n");
		scanf("%d",&s1.id);
		printf("Enter name of student\n");
		scanf("%s",&s1.name);
		printf("Enter father name of student\n");
		scanf("%s",&s1.fname);
		printf("Enter age of student\n");
		scanf("%d",&s1.age);
		printf("Enter gender M/F of student\n");
		scanf("%s",&s1.gender);
          printf("\n\n");
		  printed(&s1);
return 0;	
}
