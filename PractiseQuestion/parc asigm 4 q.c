#include<stdio.h>
# define size 20

int multiple(int *ptr1,int *ptr2,int *ptr3)
{
printf("%d   ",*ptr2);
		printf("%d  ",*(ptr2+1));
		printf("%d  ",*(ptr2+2));
		printf("%d  ",*(ptr2+3));
		printf("%d    ",*(ptr2+4));
		printf("%d\n",*(ptr2+5));


	
}




int main()
{
	int aray1[size][size],aray2[size][size],aray3[size][size]={0};
	    int i,j,r1,c1,r2,c2;
	     printf("Enter Row and colomn of first matrix\n");
	    scanf("%d%d",&r1,&c1);
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
		
			multiple(aray1,aray2,aray3); 			
				return 0;
}
