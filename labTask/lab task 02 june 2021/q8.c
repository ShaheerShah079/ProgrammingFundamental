#include<stdio.h>
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

void display(char *name,char *title,float price,int page)
{
	printf("Student name : %s\n",name);
	printf("Book name : %s\n",title);
	printf("Book price : %.2f\n",price);
	printf("No of page of book : %d\n",page);
	
}
int main()
{
	struct user s1;
	printf("Enter Name of student , Book name they borrow \nThere price and Number of page of book\n");
	gets(s1.name);
	gets(s1.b1.title);
	scanf("%f",&s1.b1.price);
	scanf("%d",&s1.b1.page);
	display(s1.name,s1.b1.title,s1.b1.price,s1.b1.page);
	
	return 0;
}
