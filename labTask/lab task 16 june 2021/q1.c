#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	int new=0;
	ptr=fopen("practise1.txt","w");
	if(ptr==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	char ch;
	fputs("The file test.txt created successfully...!!",ptr);
	fclose(ptr);    
	return 0;
}
