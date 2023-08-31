#include<stdio.h>
#include<conio.h>

main()
{
	int a =20;
	int b =10;
	clrscr();
	printf("\t%d + %d = %d\n\t",a,b,a+b);
	printf("%d - %d = %d\n\t",a,b,a-b);
	printf("%d * %d = %d\n\t",a,b,a*b);
	printf("%d / %d = %f\n",a,b,(float)(a/b));
	getch();

}