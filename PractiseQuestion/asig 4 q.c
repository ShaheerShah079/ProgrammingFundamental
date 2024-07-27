#include<stdio.h>
# define size 20
int multiple(int *ptr1,int *ptr2,int r1,int c1,int r2,int c2)
{
		printf("%d\n",*(ptr1));
      printf("%d\n",*(++ptr1));
       printf("%d\n",*(++ptr1));
     printf("%d\n",*(++ptr1));
	
	printf("%d\n",*(ptr2));
      printf("%d\n",*(++ptr2));
       printf("%d\n",*(++ptr2));
     printf("%d\n",*(++ptr2));
      printf("%d\n",*(++ptr2));
       printf("%d\n",*(++ptr2));
	}

int main()
{
	int aray1[size][size],aray2[size][size];
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
		multiple(aray1,aray2,r1,c1,r2,c2); 
	
			
		
	return 0;
}
