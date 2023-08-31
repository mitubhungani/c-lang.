#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();

	printf("Enter year=");
	scanf("%d",&a);

	printf("Enter year=");
	scanf("%d",&b);

	while(b>=a)
	{
		if(a%4==0)
		{
			printf("%d ",a);
		}
		a++;
	}

	getch();
}