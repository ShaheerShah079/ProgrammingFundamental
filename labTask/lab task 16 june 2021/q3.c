#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch[50];
	int line=0;
	ptr=fopen("practise2.txt","r");
	if(ptr==NULL)
	{
		printf("Can't open file\n");
		exit(0);
	}
	printf("Data in this file is\n");
	while(1)
	{
		if(fgets(ch,49,ptr)==NULL)
		{
			break;
		}
		else
		{
		 printf("%s",ch);
		 line++;	
		}
	}
	fclose(ptr);
	printf("The number of line in the file is %d",line);  
	return 0;
}
