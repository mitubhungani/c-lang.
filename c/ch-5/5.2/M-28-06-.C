#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("enter A=");
	scanf("%d",&a);

	printf("enter B=");
	scanf("%d",&b);

	printf("enter C=");
	scanf("%d",&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("a is small");
		}
		else
		{
			printf("c is small");
		}
	}
	else
	{
		printf("b is small");
	}

	getch();
}