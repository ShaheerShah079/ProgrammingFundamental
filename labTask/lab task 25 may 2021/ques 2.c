#include<stdio.h>
int multiple(int *ptr1,int *ptr2,int *ptr3,int r1,int c1,int r2,int c2)
{
	static int ans=0;
	int i,j;
	static int check1=0,check2=0,check3;
	if(ans>=(c2))
		{
		check1+=(c1);	
		}
		check3=check2;
		*(ptr3+ans)=0;
		for(i=0;i<c1;i++)
		{
		*(ptr3+ans)+=(*(ptr1+check1) * *(ptr2+check2));
		check1++;
		check2+=c2;
	}
	if(ans==((r1)*(c2))-1)
	{
		return;
	}
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
int main()
{
	int i,j,r1,c1,r2,c2;
	ss:
	printf("Enter Row and colomn of first matrix\n");
	scanf("%d%d",&r1,&c1);
	int aray1[r1][c1];
	     for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		printf("Enter aray[%d][%d] element of aray : ",i,j);
	    		scanf("%d",&aray1[i][j]);
			}
		}
		printf("\n");  
		  printf("Enter Row and colomn of of second matrix\n");
	    scanf("%d%d",&r2,&c2);
	    int aray2[r2][c2];
	     for(i=0;i<r2;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		printf("Enter aray[%d][%d] element of aray : ",i,j);
	    		scanf("%d",&aray2[i][j]);
			}
		}
		if(c1!=r2)
		{
			printf("Multiplication not possible. Enter again \n");
			goto ss;
		}
		else
		{
		printf("First matrix is : \n");
		   for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c1;j++)
	    	{
	    		printf("%d     ",aray1[i][j]);
			}
			printf("\n");
		}
			printf("Second matrix is : \n");
		   for(i=0;i<r2;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		printf("%d     ",aray2[i][j]);
			}
			printf("\n");
		}
		int aray3[r1][c2];
		printf("Matrix multiplication is \n");
		multiple(aray1,aray2,aray3,r1,c1,r2,c2); 
		
          for(i=0;i<r1;i++)
	    {
	    	for(j=0;j<c2;j++)
	    	{
	    		printf("%d     ",aray3[i][j]);
			}
			printf("\n");
		}	
		}
		
	return 0;
}

