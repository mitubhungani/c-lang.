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

	(a<b)
		?(a<c)
			?printf("A is small=%d",a)
			:printf("C is small=%d",c)
		:(b<c)
			?printf("B is small=%d",b)
			:printf("C is small=%d",c);

	getch();
}