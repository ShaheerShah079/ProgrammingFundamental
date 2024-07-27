#include<stdio.h>
int check(int aray[20][20],int row,int colom,int *x,int *y)
{
	int i,j;
		for(i=0;i<row;i++)
	{
		for(j=0;j<colom;j++)
		{
		if(i==j)
		{
			if(aray[i][j]!=1)
			{
				
				break;
			}
			
			}
		if(i!=j)
		{ 
			if(aray[i][j]!=0)
			{
				break;
			}
		    }			
		}
		if(j!=colom)
		{
			break;
		}
	
	}
    *x=i;
    *y=j;
}
int scan(int aray[20][20],int row,int colom)
{
	int i,j;
printf("Enter element in aray\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<colom;j++)
		{
		scanf("%d",&aray[i][j]);	
		}
	}	
}
int main()
{
	int row,colom,x,y;
	ss:
	printf("Enter row and column of Matrizx\n");
	scanf("%d%d",&row,&colom);
	if(row!=colom)
	{
		printf("ROW and Coloumn must be same\n");
		goto ss;
	}
	else
	{
	
	int aray[row][colom];
	scan(aray,row,colom);
	
    check(aray,row,colom,&x,&y); 
	if(x==(row)&&y==(colom))
	{
		printf("Identity");
		
	}
	else
	{
		printf("NOT A INDENTITY");
	}
}
	return 0;
}
