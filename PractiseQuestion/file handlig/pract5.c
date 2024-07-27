#include<stdio.h>
#include<string.h>
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
	printf("\n");

    printf("The number of new line is %d",new+1);
	fclose(ptr);    
	return 0;
}
