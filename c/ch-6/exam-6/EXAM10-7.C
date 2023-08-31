#include<stdio.h>
#include<conio.h>
main()
{
	char a='a';
	clrscr();

	do
	{
		printf("%c\n",a);
		a=a+3;
		a++;
	}while(a<='z');
	getch();
}