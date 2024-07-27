#include<stdio.h>
struct student
{
	int id;
	char name[20];
	char fname[20];
	int age;
	char gender[10];
	char datebirth[20];
	char adress[100];
	char num[15];
	char blood[4];
	char progname[20];
	char coursereg[20];
};
struct student printed(struct student a[10])
{
	int i;
	for(i=0;i<1;i++)
	{
		printf("Student%d Id is %d\n",i+1,a[i].id);
		printf("Student%d name is %s\n",i+1,a[i].name);
		printf("Student%d father name is %s\n",i+1,a[i].fname);
		printf("Student%d age is %d\n",i+1,a[i].age);
		printf("Student%d gender M/F is %s\n",i+1,a[i].gender);
		printf("Student%d Date of birth is %s\n",i+1,a[i].datebirth);
		printf("Student%d adress is %s\n",i+1,a[i].adress);
		printf("Student%d phone number is %s\n",i+1,a[i].num);
		printf("Student%d blood group is %s\n",i+1,a[i].blood);
		printf("Student%d Programe name is %s\n",i+1,a[i].progname);
		printf("Student%d course register is %s\n",i+1,a[i].coursereg);
        printf("\n\n");
	}
}
struct student scaned(struct student a[10])
{
	int i;
	for(i=0;i<1;i++)
	{
		printf("Enter id of student%d\n",i+1);
		scanf("%d",&a[i].id);
		printf("Enter name of student%d\n",i+1);
		scanf("%s",&a[i].name);
		printf("Enter father name of student%d\n",i+1);
		scanf("%s",&a[i].fname);
		printf("Enter age of student%d\n",i+1);
		scanf("%d",&a[i].age);
		printf("Enter gender M/F of student%d\n",i+1);
		scanf("%s",&a[i].gender);
		printf("Enter Date of birth of student%d\n",i+1);
		scanf("%s",&a[i].datebirth);
		printf("Enter adress of student%d\n",i+1);
		scanf("%s",&a[i].adress);
		printf("Enter phone number of student%d\n",i+1);
		scanf("%s",&a[i].num);
		printf("Enter blood group of student%d\n",i+1);
		scanf("%s",&a[i].blood);
		printf("Enter Programe name of student%d\n",i+1);
		scanf("%s",&a[i].progname);
		printf("Enter course register by student%d\n",i+1);
		scanf("%s",&a[i].coursereg);
		
	}
}
int main()
{
struct student aray[10];
scaned(aray);
printf("\n\n");
printed(aray);
return 0;	
}
