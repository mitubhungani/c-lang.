#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c=0;
	clrscr();

	printf("Enter B=");
	scanf("%d",&b);

	for(a=1;a<=b;a++)
	{
		c=c+a;

	}
	printf("Ans=%d",c);

	getch();
}