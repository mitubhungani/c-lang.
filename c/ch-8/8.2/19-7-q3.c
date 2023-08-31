#include<stdio.h>

main()
{
	
	int n;
	
	printf("Enter:");
	scanf("%d",&n);
	
	int a[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]*a[i]);
	}
}
