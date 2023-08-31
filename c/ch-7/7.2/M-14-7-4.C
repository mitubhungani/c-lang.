#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,s;
	clrscr();

	for(a=5;a>=1;a--)
	{
		for(s=5-a;s>=1;s--)
		{
			printf(" ");
		}
		for(b=a;b>=1;b--)
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