#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	clrscr();

	printf("enter A=");
	scanf("%d",&a);

	printf("enter B=");
	scanf("%d",&b);

	printf("enter C=");
	scanf("%d",&c);

	printf("enter D=");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
			      printf("a is big");
			}
		}
		else
		{
			printf("d is big");
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is big");
			}
			else
			{
				printf("d is big");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is big");
			}
			else
			{
				printf("d is big");
			}
		}
	}
	getch();
}