#include<stdio.h>
int main()
{
	FILE *ptr;
	char a[50],b[50],check,check1,check2;
	int i=0,j;
		ptr=fopen("check.txt","r");
	while(1)
	{	if(fgets(a[i],49,ptr)==NULL)
	{
		break;
	}
	printf("%s",a[i]);
	i++;
    }
	fclose(ptr);	
	ptr=fopen("check.txt","w");
	while(strlen(gets(b))>0)
       {
       	fputs(b,ptr);
       	fputc('\n',ptr);
	   }
	fclose(ptr);
	ptr=fopen("check.txt","a");
	while(strlen(gets(b))>0)
       {
       	fputs(b,ptr);
       	fputc('\n',ptr);
	   }
	fclose(ptr);	
	return 0;
}
