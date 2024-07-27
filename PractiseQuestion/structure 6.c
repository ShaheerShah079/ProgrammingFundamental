#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float fee;
};

struct student printed(struct student a)
{
	
		
		printf("Student name is %s\n",a.name);
		printf("Student Id is %d\n",a.id);
		printf("Student fee is %.2f\n",a.fee);
	    printf("\n\n");
}
int main()
{
struct student s1,s2;

	
		printf("Enter name of student\n");
		scanf("%s",&s1.name);
		printf("Enter fee of student\n");
		scanf("%f",&s1.fee);
		printf("Enter id of student\n");
		scanf("%d",&s1.id);
		printf("\n\n");
			printf("Enter fee of student2\n");
		scanf("%f",&s2.fee);
printed(s1);
printed(s2);

return 0;	
}
