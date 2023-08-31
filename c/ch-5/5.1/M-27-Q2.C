#include<stdio.h>
#include<conio.h>

main()
{
	float a;
	clrscr();

	printf("enter value=");
	scanf("%f",&a);

	if(a<=0)
	{
		if(a==0) {
			printf("you enter 0.");
		} else {
			printf("negative number.");
		}
	}
	else
	{
		printf("positive number.");
	}

	getch();

}