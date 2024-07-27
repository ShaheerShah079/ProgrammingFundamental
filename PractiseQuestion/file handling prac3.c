#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr;
	int new=0;
	ptr=fopen("practise1.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(ptr);
		if(ch=='\n')
		{
			new++;
		}
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	

    printf("The number of new line is %d",new);
	fclose(ptr);    
	return 0;
}
