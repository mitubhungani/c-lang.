#include<stdio.h>
#include<conio.h>

main()
{
	int a='e',b='a';
	clrscr();

	for(a='A';a<='E';a++)
	{
		for(b=a;b>='A';b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}

	getch();

}