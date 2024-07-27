#include<stdio.h>
#pragma pack(1)
struct book
{
    char title[50];
	float price;
	int page;
};
struct user
{
	char name[50];
    struct book b1;
};

void display(struct user s)
{
	printf("Student name : %s\n",s.name);
	printf("Book name : %s\n",s.b1.title);
	printf("Book price : %.2f\n",s.b1.price);
	printf("No of page of book : %d\n",s.b1.page); 
	//if we change the value of any structure in function its only chage in that funtion not in the main function
	
}
int main()
{
	struct user s1;
	printf("Enter Name of student\n");
	gets(s1.name);
	printf("Enter Book name they want to borrow \n");
	gets(s1.b1.title);
	printf("Enter BOOK price\n");
	scanf("%f",&s1.b1.price);
	printf("Enter Number of page of book\n");
	scanf("%d",&s1.b1.page);
	display(s1);
	return 0;
}
