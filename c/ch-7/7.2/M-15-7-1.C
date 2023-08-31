#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	clrscr();

	for(i=1;i<=7;i++)
{
			if(i==1 || i==5 || i==6 || i==7 )
			{
				printf("$     $");
			}
			else if(i==2)
			{
				printf("$$   $$");
			}
			else if(i==3)
			{
				printf("$ $ $ $");
			}
			else if(i==4)
			{
				printf("$  $  $");
			}

		printf("\n");
	}

	getch();
}