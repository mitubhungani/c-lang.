#include<stdio.h>

main(){
	int n;
	printf("Enter Array size:");
	scanf("%d",&n);
	
	printf("Enter array A's element:\n");
	
	int a[n],b[n],i,count=0;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("================================\n");
	printf("Enter array B's element:\n");
	for(i=0;i<n;i++)
	{
		printf("b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("=================================\n");
	printf("Array c is:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d\n",a[i]+b[i]);
	}
	printf("=================================");
}
