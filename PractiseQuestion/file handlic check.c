#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char a[50],b[50],check;
	printf("enter check\n");
	check=getch();
	if(check=='1')
	{
	ptr=fopen("check.txt","r");
	while(fgets(a,49,ptr)!=NULL)
	{	
	printf("%s",a);
	}
	fclose(ptr);
    }	
	else
	{	
	 printf("write");
	ptr=fopen("check.txt","a");
	while(strlen(gets(b))>0)
       {
       	fputs(b,ptr);
       	fputc('\n',ptr);
	   }
	fclose(ptr);	
    }
	return 0;
}


	
