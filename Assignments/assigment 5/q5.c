#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch[50];
	ptr=fopen("assigment4q1.txt","a+");
	if(ptr==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	printf("Enter string to write them on notepad and press enter to stop processing\n");
	while(1)
	{
		if(strlen(gets(ch))==0)
		{
			break;
		}
		else
		{
		 fputs(ch,ptr);	
		 fputc('\n',ptr);
		}
	}
	fclose(ptr);
	
	ptr=fopen("assigment4q1.txt","a+");
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
