#include<stdio.h>
# define size 20
int display(int aray[size][size],int row,int colom)
{
	int i,j;
	
	  for(i=0;i<row;i++)
	    {
	    	for(j=0;j<colom;j++)
	    	{
	    	printf("%d	",aray[i][j]);	
			}
			printf("\n");
		}
			printf("\n");
}
int scan(int aray[size][size],int row,int colom)
{
	int i,j;
	  for(i=0;i<row;i++)
	    {
	    	for(j=0;j<colom;j++)
	    	{
	    		printf("Enter aray[%d][%d] element of aray : ",i,j);
	    		scanf("%d",&aray[i][j]);
			}
		}
		printf("\n");
}
int multiple(int *ptr1,int *ptr2,int *ptr3,int r1,int c1,int r2,int c2)
{
	static int ans=0;
	int i,j;
	static int check1=0,check2=0,check3;
	if(ans>=(((r1)*(c2))/2))
		{
		check1+=c1;	
		}
		check3=check2;
		*(ptr3+ans)=0;
		for(i=0;i<c1;i++)
		{
		*(ptr3+ans)=*(ptr3+ans)+(*(ptr1+check1) * *(ptr2+check2));
		printf("%d  ",check2);	
		printf("%d ",*(ptr2+check2));
		check1++;
		check2+=c2;
	}
    printf("\n");
	if(ans==((r1)*(c2))-1)
	{
		return;
	}
	else
	{
		check3++;
		check2=check3;
		if(ans==(((r1)*(c2))/2)-1)
		{
	     check2=0;	
		}
		check1=0;
	ans++;
	
	multiple(ptr1,ptr2,ptr3,r1,c1,r2,c2);	
	}
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
	    //scan(aray2,r2,c2);
       // printf("1st matrix is \n");
        //display(aray1,r1,c1);
        //printf("2nd matrix is \n");
        //display(aray2,r2,c2);
        if(c1!=r2)
        {
        	printf("Matrix Multiplication is not posible Enter again\n\n");
        	goto ss;
		}
		else
		{
		
		multiple(aray1,aray2,aray3,r1,c1,r2,c2); 
	printf("Multiplication of these two matrix is \n");
	//display(aray3,r1,c2);
			
		}
	return 0;
}
