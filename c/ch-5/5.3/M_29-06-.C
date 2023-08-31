#include<stdio.h>
#include<conio.h>

main()
{
	int a;
	clrscr();

	printf("Enter....!!\n");
	printf("1)English\n");
	printf("2)hindi\n");
	printf("3)gujarati\n");
	printf("Enter your choice..!!");
	scanf("%d",&a);

	switch(a)
	{
		case 1:
			printf("Enter..!! \n");
			printf("press 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("press 3 for Special Recharge\n");
			printf("Enter your choice..!!");
			scanf("%d",&a);

				switch(a)
				{
					case 1:
					printf("you have successfully done internet recharge\n");
					break;

					case 2:
					printf("you have successfully done Top-up recharge\n");
					break;

					case 3:
					printf("you have successfully done spacial recharge\n");
					break;
				}
			break;
		case 2:
			printf("Enter..!! \n");
			printf("Internet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge  ke liye 2 dabaiye\n");
			printf("Special Recharge  ke liye 3 dabaiye\n");
			printf("Enter your choice..!!");
			scanf("%d",&a);

				switch(a)
				{
					case 1:
					printf("internet recharge ho gaya\n");
					break;

					case 2:
					printf("Top-up recharge ho gaya\n");
					break;

					case 3:
					printf("spacial recharge ho gaya\n");
					break;
				}
			break;
		case 3:
		printf("Enter..!! \n");
			printf("Internet Recharge mate 1 press karo\n");
			printf("Top-up Recharge  mate 2 press karo\n");
			printf("Special Recharge  mate 3 press karo\n");
			printf("Enter your choice..!!");
			scanf("%d",&a);

				switch(a)
				{
					case 1:
					printf("internet recharge safalta purvak thai gayu\n");
					break;

					case 2:
					printf("Top-up recharge safalta purvak thai gayu\n");
					break;

					case 3:
					printf("spacial recharge safalta purvak thai gayu\n");
					break;
				}
			break;
	}
	getch();
}