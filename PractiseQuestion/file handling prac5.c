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
	int new=0;
    struct student a[10];
	ptr=fopen("practise5.txt","r");
	char ch;
	while(1)
	{
		ch=fgetc(ptr);
		if(ch==EOF)
		{
			break;
		}
		if(ch=='\n');
		new++;
		
	}
	
	fclose(ptr);
    printf("The number of new line is %d",new);
    
	return 0;
}
