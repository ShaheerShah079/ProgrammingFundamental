#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
struct  library
    {
        char nameoflibrary;
        char title;
        char books[100];
        int departments;
        char issbooks;
        char delrecord;
        char bookprice;
        char author;
    

    
    };
	
struct WORKER
{
	
	    char name[1000];
		int  books;
		int userAge;
		char userPhoneno[1000];
		char userEmail[1000];
		
};
void menudriven () ;
void integerSorting();

int main()

{
	struct WORKER w[20];
	 int menu;
	  menudriven () ;
	  scanf("%d",&menu);
	   if(menu==3)
	   {
	   	  integerSorting(w); 
	   }
	printf("\n\n\t\t\t*THANKS FOR VISISTING ENJOY READING *\n");
}
void menudriven()
{
	printf("Enter 1 for TABULAR FORM\n Enter 2 for DETAIL FORM\n Enter 3 for SORTING  WITH STRING\n ENTER 4 FOR SORTING WITH INTEGER\n");
}
void integerSorting(struct WORKER w[20])
{
		struct library a={"marwa library","books for everone ","allkindsofbooks",4," one ","yes","goodprice","bestauthor"};
		
	  	printf("\t\t\t\t\tLIBRARY DETAILS\n");
	  	printf("\t\t----------------------------------------------------\n");
		printf("\t\t LIBRARY NAME                :  %s\n",a.nameoflibrary);
		printf("\t\t TITLE                       : %s\n",a.title);
		printf("\t\t BOOKS                       : %s\n",a.books);
		printf("\t\t DEPARTMENT                  : %d\n",a.departments);
		printf("\t\t ISSUE BOOK                  :%d\n",a.issbooks);
		printf("\t\t DELETE RECORDS              :%s\n",a.delrecord);
		printf("\t\t BOOK PRICE                  :%s\n",a.bookprice);
		printf("\t\t AUTHOR                      : %s\n",a.author);
		printf("\t\t________\n");
	w[0]={"marwa library","books for everone ","allkindsofbooks",4," one ","yes"," no","yes","goodprice","bestauthor"};
	w[1]={"maha  library","books for everone ","math",4," one ","yes"," no","yes","cheap","mathr"};
w[2]={"esha library","books for everone ","urdu",3," one ","yes"," no","yes","good","urdu"};
w[3]={"noor library","books for everone ","PK",1," one ","no"," yes","no","expensive","PK"};
w[4]={"zainab library","books for everone ","GEOlogy",7," yes ","no","yes","no","cheap","AMERICAN"};
w[5]={"maria library","books for everone ","BIO", 8," one ","yes"," no","yes","goodprice","bestauthor"};
w[6]={"hiba library","books for everone ","CHEM",5," one ","yes"," no","yes","highrate","bestauthor"};
w[7]={"elsa library","books for everone ","PF",4,"yes","no"," yes","no","cheap","PF"};
w[8]={"marwa library","books for everone ","allkindsofbooks",4," one ","yes"," no","yes","goodprice","bestauthor"};
w[9]={"maha  library","books for everone ","math",4," one ","yes"," no","yes","cheap","mathr"};
w[10]={"esha library","books for everone ","urdu",3," one ","yes"," no","yes","good","urdu"};
w[11]={"noor library","books for everone ","PK",1," one ","no"," yes","no","expensive","PK"};
w[12]={"zainab library","books for everone ","GEOlogy",7," yes ","no","yes","no","cheap","AMERICAN"};
w[13]={"maria library","books for everone ","BIO", 8," one ","yes"," no","yes","goodprice","bestauthor"};
w[14]={"hiba library","books for everone ","CHEM",5," one ","yes"," no","yes","highrate","bestauthor"};
w[15]={"elsa library","books for everone ","PF",4,"yes","no"," yes","no","cheap","PF"};
	
	int x=0;
	for(int x=0;x<19;x++)
	{
		for (int y=0;y<19;y++)
		{
			if(A[y].books>A[y+1].issbooks)
			{
				WORKER  t;
				t=A[y];
				A[y]=A[y+1];
				A[y+1]=t;
			}
		}
	}
	for(int z=0;z<20;z++)
	{
	//	printf("WORKER AGE AFTER SORTING IS %d\n",A[z].books);
		printf("\n____\n");
		printf("\nWORKER  No %d      |\n",z+1);
		printf("\n____|\n");
		printf("\n\n\n");
	    printf("\t\t\t\t\tLIBRARY DETAILS\n");
	  	printf("\t\t----------------------------------------------------\n");
		printf("\t\t LIBRARY NAME                :  %s\n",a1[y].nameoflibrary);
		printf("\t\t TITLE                       : %s\n",a1[y].title);
		printf("\t\t BOOKS                       : %s\n",a1[y].books);
		printf("\t\t DEPARTMENT                  : %s\n",a1[y].departments);
		printf("\t\t ISSUE BOOK                  :%d\n",a1[y].issbooks);
		printf("\t\t DELETE RECORDS              :%s\n",a1[y].delrecord);
		printf("\t\t BOOK PRICE                  :%s\n",a1[y].bookprice);
		printf("\t\t AUTHOR                      : %s\n",a1[y].author);
		printf("\t\t________\n");
	
		
	}
}
