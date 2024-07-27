#include<stdio.h>
#include<string.h>
int main()
{
	FILE *ptr;
    char s[15],s1[15];
	ptr=fopen("mytext.txt","w");
	gets(s);
	fputs(s,ptr);
    
    fclose(ptr);
    ptr=fopen("mytext.txt","r");
    char ch;
    while(1)
    {
    	ch=fgetc(ptr);
    	if(ch==EOF)
    	{
    		break;
		}
		else
		{
			printf("%c",ch);
		}
	}
	printf("\n");
    fclose(ptr);
    ptr=fopen("mytext.txt","r");
fgets(s1,(strlen(s)+1),ptr);
    printf("%s",s1);
	fclose(ptr);
	return 0;
}
