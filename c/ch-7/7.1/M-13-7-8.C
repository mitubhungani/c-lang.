#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c=1;
	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=a;b<=5;b++)
		{
			printf("%d ",c++);
		}
		printf("\n");
	}

	getch();
}