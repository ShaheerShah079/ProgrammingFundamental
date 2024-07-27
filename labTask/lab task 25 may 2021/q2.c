#include<stdio.h>
int multiple(int *ptr1,int *ptr2,int *ptr3)
{
	static int ans=0;
	*(ptr3+ans)=*(ptr1+ans) * *(ptr2+ans);
	if(ans==5)
	{
		return;
	}
	ans++;
	multiple(ptr1,ptr2,ptr3);
}
int main()
{
	int aray1[2][3]={{1,2},{3,4}},
	    aray2[2][3]={{5,6,7},{8,9,10}};
	    int aray3[2][3];
	    int i,j;
	    // First matrix
	    printf("1st matrix is \n");
	 	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
        {
        printf("%d	",aray1[i][j]);	
		}		
		printf("\n");
   }
		printf("\n");  
		// Second Matrix   
       printf("2nd matrix is \n");
	 	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
        {
        printf("%d	",aray2[i][j]);	
		}		
		printf("\n");
   }    
		printf("\n");  
		multiple(aray1,aray2,aray3);  
		// Multiplication Matrix 
	printf("Multiplication of element of these two matrix is  \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
        {
        printf("%d	",aray3[i][j]);	
		}		
		printf("\n");
   }
	    
	return 0;
}
