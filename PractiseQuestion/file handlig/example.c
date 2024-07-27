#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ptr=NULL,*ptr1=NULL,*ptr2=NULL;
    int a[4][100];
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
	fgets(a[i],100,ptr2);
	i++;	
    }
    for(j=0;j<4;j++)
    {
    	if(ln==(j+1))
    	{
    		continue;
		}
	fprintf(ptr1,"%s",a[j]);	
	}
	
		fclose(ptr); 
    fclose(ptr1);
    fclose(ptr2);


	return 0;
}
