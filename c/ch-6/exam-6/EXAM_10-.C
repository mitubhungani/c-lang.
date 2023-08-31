#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d=0;
	clrscr();

	printf("Enter A=");
	scanf("%d",&a);

	b=a%10;

	while(a>=10)
	{
		a=a/10;
	}
	c=a;
	d=b+c;
	printf("Ans=%d",d);  hgegegbie

	getch();
}