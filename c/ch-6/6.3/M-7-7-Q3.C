#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	clrscr();

	printf("Enter B=");
	scanf("%d",&b);

	for(a=1;a<=10;a++)
	{
		printf("%d X %d = %d\n",b,a,b*a);
	}

	getch();
}