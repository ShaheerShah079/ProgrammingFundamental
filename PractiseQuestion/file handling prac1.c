#include<stdio.h>
#include<string.h>
struct student
{
	int integer;
	char string[100];
	float floating;
};
int main()
{
	FILE *ptr;
	
    struct student a[10];
	ptr=fopen("practise1.txt","w");
	printf("Enter student1 rollno\n");
	scanf("%d",&a[0].integer);
	printf("Enter student1 name\n");
	scanf("%s",a[0].string);
	printf("Enter student1 fee\n");
	scanf("%f",&a[0].floating);
	fprintf(ptr,"Name is :%s",a[0].string);
	fputs("\t",ptr);
	fprintf(ptr,"Roll no is :%d",a[0].integer);
	fputs("\t",ptr);
	fprintf(ptr,"Fee is %.2f",a[0].floating);
	fputs("\n",ptr);
	
	
	printf("Enter student2 rollno\n");
	scanf("%d",&a[0].integer);
	printf("Enter student2 name\n");
	scanf("%s",a[0].string);
	printf("Enter student2 fee\n");
	scanf("%f",&a[0].floating);
	fprintf(ptr,"%s",a[0].string);
	fputs("\t",ptr);
	fprintf(ptr,"%d",a[0].integer);
	fputs("\t",ptr);
	fprintf(ptr,"%.2f",a[0].floating);
	fputs("\n",ptr);
	
	printf("Enter student2 rollno\n");
	scanf("%d",&a[0].integer);
	printf("Enter student2 name\n");
	scanf("%s",a[0].string);
	printf("Enter student2 fee\n");
	scanf("%f",&a[0].floating);
	fprintf(ptr,"%s",a[0].string);
	fputs("\t",ptr);
	fprintf(ptr,"%d",a[0].integer);
	fputs("\t",ptr);
	fprintf(ptr,"%.2f",a[0].floating);
    fclose(ptr);
    
    
	return 0;
}
