#include<stdio.h>
#include<conio.h>
main()
{
	float a, b, c;
	clrscr();

	printf("Enter unit=");
	scanf("%f",&a);

	if(a>=0)
	{
		if(a>=0 && a<=50)
		{
			b=a*0.5;
		}
		else if(a>50 && a<=150)
		{
			b=((a-50)*0.75)+25;
		}
		else if(a>150 && a<=250)
		{
			b=((a-150)*1.2)+100;
		}
		else
		{
			b=((a-250)*1.5)+220;
		}
	}
	else
	{
		printf("Enter appropriate unit\n");
	}

	c=b+(b*0.2);

	printf("your electricity bill is=%f",c);

	getch();
}