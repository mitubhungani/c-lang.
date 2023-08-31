#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c=0;
	clrscr();

	printf("Enter A=");
	scanf("%d",&a);

	while(a!=0)
	{
		b=a/10;
		a=b;
		c++;
	}
	printf("Ans= %d",c);

	getch();
}