#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int check,cont;
	ss:
	printf("Enter\n1. To read from file\n2. To writing into the file\n3. To add content at the end of existing file\n");
    scanf("%d",&check);
    	if(check==1)
    	{
    		char s1[50];
        	FILE *ptr1;
    		ptr1=fopen("assigmett4text.txt","r");
         while(fgets(s1,49,ptr1)!=NULL)
	{
		printf("%s",s1);
	}
	        fclose(ptr1);
		}
    	if(check==2)
    	{
    		char s2[50];
        FILE *ptr2;
    		ptr2=fopen("assigmett4text.txt","w");
	while(strlen(gets(s2))>0)
	{
	fputs(s2,ptr2);
	fputc('\n',ptr2);	
	}
			fclose(ptr2);
		}
		if(check==3)
		{
			char s3[50];
			FILE *ptr3;
		    ptr3=fopen("assigmett4text.txt","r+");
	while(strlen(gets(s3))>0)
	{
	fputs(s3,ptr3);
	fputc('\n',ptr3);	
	}
		    fclose(ptr3);	
		}
	printf("\nTo continue enter 1\n");
	scanf("%d",&cont);
	if(cont==1)
	{
		goto ss;
	}
	else
	{
		exit(0);
	}
	
	return 0;
}
