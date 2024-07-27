#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sort(int *ptr1,int *ptr2,int row,int col)
{
	int min,check,i,j,k=0;
	for(i=0;i<150;i++)
	{
	min=*ptr1;
    for(j=1;j<150;j++)
    {
    	if(*(ptr1+j)<min)
    	{
    		check=j;
    		min=*(ptr1+j);
		}
	}
        *(ptr2+k)=min;
        k++;
		*(ptr1+check)=1000;
		check=0;
	}
}	

void random(int a[30][5],int row,int col)
{
	int i,j;
	srand(time(0));
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			a[i][j]=rand()%99;
		}
	}	
}
void display2(int a[30][5],int row,int col)
{
	int i,j,k;
for(i=0;i<row;i++)
	{
		
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
			if(a[i][j]>=10)
			{
				printf("         ");
			}
			if(a[i][j]>=0&&a[i][j]<=9)
			{
				printf("          ");
			}
		}
		printf("\n");
	}
	printf("\n\n");	
}
void display(int a[30][5],int row,int col)
{
	int i,j,k;
	printf("            ");
	for(j=0;j<col;j++)
		{
			printf("course%d   ",j+1);
		}
			printf("\n");
for(i=0;i<row;i++)
	{
		printf("student:%d",i+1);
		if(i>=0&&i<=8)
			{
				printf("    ");
			}
		if(i>=9)
			{
				printf("   ");
			}
			
		for(j=0;j<col;j++)
		{
			printf("%d",a[i][j]);
			if(a[i][j]>=10)
			{
				printf("         ");
			}
			if(a[i][j]>=0&&a[i][j]<=9)
			{
				printf("          ");
			}
		}
		printf("\n");
	}
	printf("\n\n");	
}
void scan(int a[30][5],int row,int col)
{
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter [%d][%d] index : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

int main()
{
	int row,col,check;
	int array[30][5],array2[30][5];
	printf("To store random marks press 1.\nTo scan student marks press 2.\n");
	scanf("%d",&check);
	switch(check)
	{
		case 1:
			random(array,30,5);
			break;
		case 2:
		    scan(array,30,5);
			break;	
    }
	display(array,30,5);
	sort(&array[0][0],&array2[0][0],30,5);
	printf("Marks       After       sorting       is \n\n");
	display2(array2,30,5);
	
	return 0;
}
