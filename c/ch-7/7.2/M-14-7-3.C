#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,s;
	clrscr();

	for(a=5;a>=1;a--)
	{
		for(s=4;s>=5-a;s--)
		{
			printf(" ");
		}
		for(b=a;b<=5;b++)
		{
			printf("%d",a);
		}
	printf("\n");
	}

	getch();

}