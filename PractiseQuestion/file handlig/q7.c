#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr=NULL,*ptr1=NULL;
     int ch=0,num=0,z=0;
     char check;
	ptr=fopen("practise5.txt","r");
	ptr1=fopen("practise5.txt","r");
	while(1)
	{
		check=fgetc(ptr);
	if(check==EOF)
		{
			break;
		}
		if(((check>=65)&&(check<=90))||((check>=97)&&(check<=122)))
		{
			z=0;
		ch++;	
		}
		if(check==' '||check=='\n')
		{
			z=0;
		}
		if((check>=48)&&(check<=57))
		{
			z++;
			num++;
			if(z>=2)
			{
				num--;
			}
		}
}

  printf("number of character is %d",ch);
   printf("\n number of word is %d",num);
	fclose(ptr); 
    fclose(ptr1); 

	 
	return 0;
}
