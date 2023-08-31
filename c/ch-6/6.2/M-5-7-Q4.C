#include<stdio.h>
#include<conio.h>
main()
{
	int a=0,b=1,c,n,i;
	clrscr();

	printf("Enter n=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;


		printf("%d ",a);

	}

	getch();
}