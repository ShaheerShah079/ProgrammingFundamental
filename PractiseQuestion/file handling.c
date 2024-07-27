#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch,ch1[10];
	ptr=fopen("mytext.txt","w");
	fputs("Heloo world",ptr);
	fputc('\0',ptr);
	fputs("i am shaheer",ptr);
	fputc('\0',ptr);
	fclose(ptr);
	ptr=fopen("mytext.txt","r");
	while(1)
	{
	ch = fgetc(ptr);
	if(ch=='\0')
	{
		break;
			}
	printf("%c",ch);				
	}
	while(1)
	{
	ch = fgetc(ptr);
	if(ch=='\0')
	{
		break;
			}
	printf("%c",ch);				
	}
	fclose(ptr);
	return 0;
}
