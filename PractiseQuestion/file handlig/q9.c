#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	char nam[20];
	gets(nam);
	puts(nam);
	FILE *ptr=NULL,*ptr1=NULL,*ptr2=NULL;
    char a[4][50];
    int i=0,j;
    int ln;
    scanf("%d",&ln);
	ptr=fopen("practise5.txt","r");
	ptr2=fopen("practise5.txt","r");
	ptr1=fopen("practise5out.txt","w");
	while(1)
	{
	if(fgetc(ptr)==EOF)
		{
			break;
		}	
	fgets(a[i],49,ptr);
	i++;	
    }
    for(j=0;j<4;j++)
    {
    	printf("helo%s",a[j]);
	}
    
    for(j=0;j<4;j++)
    {
    	if(ln==(j+1))
    	{
    	strcpy(a[j],nam);
         fputs(a[j],ptr1);
         fputs("\n",ptr1);
         
		}
		else
		{
		fprintf(ptr1,"%s",a[j]);	
		}	
	}
	fclose(ptr); 
    fclose(ptr1);
    fclose(ptr2);
	return 0;
}
