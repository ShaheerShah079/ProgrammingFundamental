#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
// print rectangle
int rectangle(int aray[100][100] ,int a, int x, int y )
{
	int k,l,m,n,check;
	
	for(k=0;k<=(x/2);k++)
	{
		for(l=0;l<=x;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow rectangle click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
	   halow_rectangle(aray,a,x,y);
	}	
	main();
}
//print hallow rectangle
int halow_rectangle(int aray[100][100] ,int a, int x, int y )
{
	int k,l,check;
	for(k=0;k<=(x/2);k++)
	{
		for(l=0;l<=x;l++)
		{
			if(k==0||k==(x/2)||l==0||l==x)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}
	main();
}
// print square
int square(int aray[100][100] ,int a, int x, int y )
{
	int k,l,m,n,check;
	
	for(k=0;k<=x;k++)
	{
		for(l=0;l<=x;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow square click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
	   halow_square(aray,a,x,y);
	}	
	main();
}
//print hallow square
int halow_square(int aray[100][100] ,int a, int x, int y )
{
	int k,l,check;
	for(k=0;k<=x;k++)
	{
		for(l=0;l<=x;l++)
		{
			if(k==0||k==x||l==0||l==x)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}
	main();
}
//print right angle
int right_angle(int aray[100][100] ,int a, int x, int y )
{
	int k,l,check;
	for(k=0;k<=x;k++)
	{
		for(l=0;l<=k;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow right angle click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	halow_right_angle(aray,a,x,y);
	}	
main();
}
//print halow right angle
int halow_right_angle(int aray[100][100] ,int a, int x, int y )
{
	int k,l;
	for(k=0;k<=x;k++)
	{
		for(l=0;l<=k;l++)
		{
			if(k==0||k==x||l==0||k==l)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}	
main();	
}
//print inverse right angle
int inverse_right(int aray[100][100] ,int a, int x, int y )
{
	int k,l,check;
	for(k=x;k>=0;k--)
	{
		for(l=0;l<=k;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow right angle click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	inverse_halow_right(aray,a,x,y);
	}	
	main();
}
//print inverse halow right angle
int inverse_halow_right(int aray[100][100] ,int a, int x, int y )
{
	int k,l;
	for(k=x;k>=0;k--)
	{
		for(l=0;l<=k;l++)
		{
			if(k==0||k==x||l==0||k==l)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}	
	main();
}
//pyramid
int pyramid(int aray[100][100] ,int a, int x, int y)
{
    int i,j,k,l,m,n,l1,l2,l3,l4,check;
  //double the array 
    for(l1=0,l2=a;l1<=x,l2<=2*a-1;l1++,l2++)
	{
		aray[0][l2]=aray[0][l1];
	}
	for(j=0;j<=x;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l3=a;l3<=2*a-1;l3++)
	{
		for(l4=0;l4<=y;l4++)
		{
			aray[l4+1][l3]=aray[l4][l3];
		}
 }
	for(k=0;k<=x;k++)
	{
		for(l=y;l>=k;l--)
		{
		printf(" ");
	}
	   for(m=0;m<=2*k;m++)
	   {
	   	printf("%c",aray[k][m]);
	   }
	printf("\n");
    }
	printf("\nTo print Hallow pyramid click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	halow_pyramid(aray,a,x,y);
	}	
	main();		
}
// hallow pyramid
int halow_pyramid(int aray[100][100] ,int a, int x, int y)
{
    int i,j,k,l,m,n,l1,l2,l3,l4;
  //double the array 
    for(l1=0,l2=a;l1<=x,l2<=2*a-1;l1++,l2++)
	{
		aray[0][l2]=aray[0][l1];
	}
	for(j=0;j<=x;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l3=a;l3<=2*a-1;l3++)
	{
		for(l4=0;l4<=y;l4++)
		{
			aray[l4+1][l3]=aray[l4][l3];
		}
 }
	for(k=0;k<=x;k++)
	{
		for(l=y;l>=k;l--)
		{
		printf(" ");
	}
	   for(m=0;m<=2*k;m++)
	   {
	   	if(k==x||k==0||m==0||m==2*k)
	   	printf("%c",aray[k][m]);
	   	else
	   printf(" ");
	   }
	   
	printf("\n");
}
main();
}
//print inverted right angle
int right_inv_angle(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l,check;
	for(k=0;k<=x;k++)
	{
		for(i=y;i>=k;i--)
		{
			printf(" ");
		}
		for(l=0;l<=k;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow right angle click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	halow_right_inv_angle(aray,a,x,y);
	}	
	main();
}
//print halow right inverted angle
int halow_right_inv_angle(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l;
	for(k=0;k<=x;k++)
	{
		for(i=y;i>=k;i--)
		{
			printf(" ");
		}
		for(l=0;l<=k;l++)
		{
			if(k==0||k==x||l==0||k==l)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}	
	main();
}
//print rhombous
int rhombous(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l,check;
	for(k=0;k<=x;k++)
	{
		for(i=0;i<k;i++)
		{
			printf(" ");
		}
		for(l=0;l<=x;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow rhombous click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	halow_rhombous(aray,a,x,y);
	}	
	main();
}
//print halow rhombous
int halow_rhombous(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l;
	for(k=0;k<=x;k++)
	{
		for(i=0;i<k;i++)
		{
			printf(" ");
		}
		for(l=0;l<=x;l++)
		{
			if(k==0||k==x||l==0||l==x)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}	
	main();
}

//print inverted rhombous
int inv_rhombous(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l,check;
	for(k=0;k<=x;k++)
	{
		for(i=y;i>=k;i--)
		{
			printf(" ");
		}
		for(l=0;l<=x;l++)
		{
			printf("%c",aray[k][l]);
		}
		printf("\n");
	}
	printf("\nTo print Hallow inverted rhombous click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	halow_inv_rhombous(aray,a,x,y);
	}
		main();
}
//print halow inverted rhombous
int halow_inv_rhombous(int aray[100][100] ,int a, int x, int y )
{
	int i,k,l;
	for(k=0;k<=x;k++)
	{
		for(i=y;i>=k;i--)
		{
			printf(" ");
		}
		for(l=0;l<=x;l++)
		{
			if(k==0||k==x||l==0||l==x)
			printf("%c",aray[k][l]);
			else
			printf(" ");
		}
		printf("\n");
	}	
	main();
}
//Diamond
int diamond(int aray[100][100] ,int a, int x, int y)
{
	int i,j,k,l,m,n,z=0,l1,l2,l3,l4,l5,check;
	// Double the aray
	 for(l1=0,l2=a;l1<=x,l2<=2*a-1;l1++,l2++)
	{
		aray[0][l2]=aray[0][l1];
	}
	
	for(j=0;j<=x;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l3=a;l3<=2*a-1;l3++)
	{
		for(l4=0;l4<=y;l4++)
		{
			aray[l4+1][l3]=aray[l4][l3];
		}
 }
	for(i=0;i<=x;i++)
	{
		for(j=y;j>=i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("%c",aray[i][k]);
		}
		printf("\n");
	}
	
	for(l=y;l>=0;l--)
	{
		for(m=0;m<=z;m++)
		{
			printf(" ");
		}
		z++;
		//if(z==y)
		//{
		//	goto ss;
		//}
		//ss:
		for(n=0;n<=2*l;n++)
		{
			printf("%c",aray[l][n]);
		}
		printf("\n");
    }
	printf("\nTo print Hallow Diamond click 1\n");
	scanf("%d",&check);
	if(check==1)
	{
     	hallow_diamond(aray,a,x,y);
	}	
	main();
}
//Halow diamond
int hallow_diamond(int aray[100][100] ,int a, int x, int y)
{
	int i,j,k,l,m,n,z=0,l1,l2,l3,l4,l5,check;
	// Double the aray
	 for(l1=0,l2=a;l1<=x,l2<=2*a-1;l1++,l2++)
	{
		aray[0][l2]=aray[0][l1];
	}
	for(j=0;j<=x;j++)
	{
		for(k=0;k<=y;k++)
		{
			aray[k+1][j]=aray[k][j];
		}
	}
	for(l3=a;l3<=2*a-1;l3++)
	{
		for(l4=0;l4<=y;l4++)
		{
			aray[l4+1][l3]=aray[l4][l3];
		}
 }
	for(i=0;i<=x;i++)
	{
		for(j=y;j>=i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			if(k==0||k==2*i)
			printf("%c",aray[i][k]);
			else
			printf(" ");
		}
		printf("\n");
	}
	
	for(l=y;l>=0;l--)
	{
		for(m=0;m<=z;m++)
		{
			printf(" ");
		}
		z++;
		if(z==y)
		{
			goto ss;
		}
		ss:
		for(n=0;n<=2*l;n++)
		{
			if(n==0||n==2*l)
			printf("%c",aray[l][n]);
			else
			printf(" ");
		}
		printf("\n");
}
	
	main();
}	
 
//main function.
int main()
{
	int i,j,k,let=0,let1=0,let2=0,check=0,check1=0;
	int aray[100][100]={0};
	char araystore[100]={0};
		printf("Type string\n");
	   gets(araystore);
	   let=strlen(araystore);
        let1=let-1;
        let2=let1-1;
		for(j=0;j<let;j++)
		{
			for(k=0;k<=let;k++)
			{
			aray[k][j]=araystore[j];
			}
		}
	printf("\n.......................Type....................................");
   	printf("\n1: To print right angle\n2: To print inverted right angle\n3: To print inverse right angle \n");
    	printf("4: To print square\n5: To print recatangle\n6: To print rhombous\n7: To print inverted rhombous\n");
    	printf("8: To print pyramid\n9: To print Diamond\n");
		scanf("%d",&check);
    		if(check==1)
    		{
    		right_angle(aray,let,let1,let2);
			}
			else if(check==2)
    		{
    		right_inv_angle(aray,let,let1,let2);
			}
			else if(check==3)
    		{
    		inverse_right(aray,let,let1,let2);
			}
			else if(check==4)
    		{
    	    square(aray,let,let1,let2);
		}
			else if(check==5)
    		{
    		rectangle(aray,let,let1,let2);
			}
			else if(check==6)
			{
			 rhombous(aray,let,let1,let2);
			 } 
            else if(check==7)
			{
			 inv_rhombous(aray,let,let1,let2);
			 } 
			 else if(check==8)
			{
			 pyramid(aray,let,let1,let2);
			 }
			 else if(check==9)
			{
			 diamond(aray,let,let1,let2);
			 }
		
    return 0;
}
