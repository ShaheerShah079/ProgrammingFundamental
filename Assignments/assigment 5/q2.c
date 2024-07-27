#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch[50];
	ptr=fopen("assigment4q.txt","r");
	if(ptr==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	printf("File assigment4q are open Data in this file is\n");
	
	while(1)
	{
		if(fgets(ch,49,ptr)==NULL)
		{
			break;
		}
		else
		{
		 printf("%s",ch);	
		}
	}
	fclose(ptr);
	return 0;
}
