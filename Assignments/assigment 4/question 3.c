#include<stdio.h>
# define size 20
int multiple(int aray1[size][size],int aray2[size][size],int aray3[size][size],int r1,int c1,int r2,int c2)
{
	static int ans=0;
	int i,j;
	static int check1=0,check2=0,check3=0;
     printf("%d\n",aray2[1][1]);
	printf("%d\n",aray2[1][2]);	
	printf("%d\n",aray2[1][3]);
	multiple(aray1[size][size],aray2[size][size],aray3[size][size],r1,c1,r2,c2);	
	}

int main()
{
	int aray1[size][size],aray2[size][size],aray3[size][size]={0};
	    int i,j,r1,c1,r2,c2;
	    ss:
	    printf("Enter Row and colomn of first matrix\n");
	    scanf("%d%d",&r1,&c1);
	    //scan(aray1,r1,c1);
	     for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		printf(",Enter aray[%d][%d] element of aray : ",i,j);
	    		scanf("%d",&aray1[i][j]);
			}
		}
		printf("\n");   
	    printf("Enter Row and colomn of of second matrix\n");
	    scanf("%d%d",&r2,&c2);
	     for(i=0;i<r2;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		printf(".Enter aray[%d][%d] element of aray : ",i,j);
	    		scanf("%d",&aray2[i][j]);
			}
		}
		printf("\n");
        if(c1!=r2)
        {
        	printf("Matrix Multiplication is not posible Enter again\n\n");
        	goto ss;
		}
		else
		{
		
		multiple(aray1,aray2,aray3,r1,c1,r2,c2); 
	
			
		}
	return 0;
}
