#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	FILE *ptr3=NULL;
ptr3=fopen("practise5out.txt","r");

	char ch;
	while(1)
	{
		 ch = fgetc(ptr3);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);	
    }
    fclose(ptr3);
    	return 0;
}
