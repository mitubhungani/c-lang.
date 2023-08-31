#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter a");
	scanf("%d",&a);
	while(a>=1)
	{
		if(a%2!=0)
		{
			printf("%d ",a);
		}
		a--;
	}
	getch();
}