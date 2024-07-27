#include<stdio.h>
int main()
{
	int age,*ptrage;
	char department[5],*ptrdep;
	float cgpa,*ptrgpa;
	printf("Enter age of student\n");
	scanf("%d",&age);
	printf("Enter department of student\n");
	scanf("%s",department);
	printf("Enter Cgpa of student\n");
	scanf("%f",&cgpa);
	ptrage=&age;
	ptrdep=department;
	ptrgpa=&cgpa;
	printf("The adress of age is %p and age is %d\n",ptrage,*ptrage);
		printf("The adress of department is %p and department is %c%c\n",ptrdep,*ptrdep,*(ptrdep+1));
	printf("The adress of cgpa is %p and Cgpa is %.2f\n",ptrgpa,*ptrgpa);

	
	
	return 0;
}
