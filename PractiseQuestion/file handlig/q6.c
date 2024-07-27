#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr=NULL,*ptr1=NULL;
     int ch=0,st=0;
     char check;
	ptr=fopen("practise5.txt","r");
	ptr1=fopen("practise5.txt","r");
	while(1)
	{
	if(fgetc(ptr)==EOF)
		{
			break;
		}
		ch++;
}
	while(1)
	{
		check=fgetc(ptr1);
	if(check==EOF)
		{
			break;
		}
	if(check==' '||check=='\n')
	{
		st++;
		}	
		
}

  printf("number of leter is %d",ch);
   printf("\n number of word is %d",st+1);
	fclose(ptr); 
    fclose(ptr1);

	 
	return 0;
}
