#include<stdio.h>
#include<conio.h>
main()
{
	int a,b=1;
	clrscr();

	printf("Enter a=");
	scanf("%d",&a);

	do
	{
		if(b%2==0)
		{
			printf("%d ",b);
		}
		b++;
	}while(b<=a);

	getch();
}