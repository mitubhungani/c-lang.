#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,s;
	clrscr();

	for(a=5;a>=1;a--)
	{
		for(s=1;s<=a;s++)
		{
			printf("%d ",s);
		}
		for(s=5-a;s>=1;s--)
		{
			printf("    ");
		}
		for(b=a;b>=1;b--)
		{
			printf("%d ",b);
		}
	printf("\n");
	}

	getch();
}