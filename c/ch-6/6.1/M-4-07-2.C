#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=1;
	clrscr();
	printf("Enter value=");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	getch();
}