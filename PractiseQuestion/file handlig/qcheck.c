#include<stdio.h>
int main()
{
	FILE *ptr;
	char a[50],b[50],check,check1,check2;
	int i=0,j;
//	scanf("%c",&check); 
//	printf("%c",check);
	//if(check=='1')
	//{
		ptr=fopen("check.txt","r");
	while(fgets(a[i],49,ptr)!=NULL)
	{	
	i++;
    }
	fclose(ptr);
	for(j=0;j<i;j++)
	{
		printf("%s",a[j]);
	}	
	//}
	//else if (check=='2')
	//{
	ptr=fopen("check.txt","w");
	while(strlen(gets(b))>0)
       {
       	fputs(b,ptr);
       	fputc('\n',ptr);
	   }
	fclose(ptr);
	//}
	//else
	//{
	ptr=fopen("check.txt","a");
	while(strlen(gets(b))>0)
       {
       	fputs(b,ptr);
       	fputc('\n',ptr);
	   }
	fclose(ptr);	
	//}

	
	return 0;
}
