#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,s;
	clrscr();

	for(a=1;a<=5;a++)
	{
		for(s=0;s<=a;s++)
		{
			printf(" ");
		}
		for(b=5;b>=a;b--)
		{
			printf("%d",b);
		}
	printf("\n");
	}

	getch();
}