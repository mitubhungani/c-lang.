#include<stdio.h>
#include<conio.h>
main()
{
	int a, b;
	clrscr();

	printf("enter A=");
	scanf("%d",&a);

	printf("enter B=");
	scanf("%d",&b);

	if(a<b)
	{
		printf("A is small=%d",a);
	}

	else
	{
		printf("B is small=%d",b);
	}

	getch();
}
