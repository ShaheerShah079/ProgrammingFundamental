#include<stdio.h>
#include<string.h>
struct student
{
	int integer;
	char string[1000];
	float floating;
};
int main()
{
	FILE *ptr;
	
    struct student a[10];
	ptr=fopen("practise1.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(ptr);
		if(ch==EOF)
		{
			break;
		}
		printf("%c  ",ch);
	}
	
	fclose(ptr);
    
    
	return 0;
}
