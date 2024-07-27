#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr=NULL;
     int cha=0,word=0;
     char ch;
	ptr=fopen("practise2.txt","r");
	while(1)
	{
	ch=fgetc(ptr);
	if(ch==EOF)
	{
		break;
	}
	if(ch==' '||ch=='\n')
	{
	word++;	
	}
	if(ch!='\n')
	{
	cha++;	
	}
	}
  printf("Number of character in the file is %d",cha);
  printf("\nNumber of word in the file is %d",word);
  fclose(ptr); 	 
	return 0;
}
