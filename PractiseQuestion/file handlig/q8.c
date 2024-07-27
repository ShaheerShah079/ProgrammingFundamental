
void func(FILE *ptr2)
{
	char ch;
	while(1)
	{
		ch = fgetc(ptr2);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);	
    }
}
int main()
{
	FILE *ptr=NULL,*ptr1=NULL,*ptr2=NULL,*ptr3=NULL;
    int a[4][100];
    int i=0,j;
    int ln;
    scanf("%d",&ln);
	ptr=fopen("practise5.txt","r");
	ptr1=fopen("practise5.txt","r");
	func(ptr1);	
	ptr2=fopen("practise5out.txt","w+");
	
	printf("1");	
	while(fgets(a[i],15,ptr)!=NULL)
	{
	i++;	
    }
    printf("2");
    for(j=0;j<4;j++)
    {
    	if(ln==(j+1))
    	{
    		printf("3");
    		continue;
		}
		printf("4");
	fprintf(ptr2,"%s",a[j]);	
	}
printf("5");
	char ch;
	while(1)
	{
		 ch=fgetc(ptr2);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);	
    }
    printf("6");
	fclose(ptr); 
    fclose(ptr1);
    fclose(ptr2); 

	return 0;
}
