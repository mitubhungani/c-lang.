#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	for(a=1;a<=5;a++)
	{
		for(b=5;b>=a;b--)
		{
			if(b%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
	printf("\n");
	}

	getch();
}