#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr=NULL,*ptr1=NULL;
    int a[4][100];
    int i=0,j;
	ptr=fopen("practise4.txt","r");
	ptr1=fopen("practise4.txt","r");
	while(1)
	{
	if(fgetc(ptr1)==EOF)
		{
			break;
		}	
	fgets(a[i],100,ptr);
	i++;
	
}
    for(j=0;j<4;j++)
    {
    printf("%s",a[j]);	
	}
	
	fclose(ptr); 
    fclose(ptr1);
   

	 
	return 0;
}
