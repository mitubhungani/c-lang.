#include<stdio.h>

main(){
	int n;
	
	printf("Enter Array Size:");
	scanf("%d",&n);
	
	int a[n],i,count=0;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		count ++;
	}
	printf("Ans:%d",count);
}
