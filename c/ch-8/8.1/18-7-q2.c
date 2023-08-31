#include<stdio.h>

main(){
	int n;
	
	printf("Enter Array Size:");
	scanf("%d",&n);
	
	int a[n],i,count=0,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&a[i]);
		count ++;
		sum=sum+a[i];
	}
	printf("Ans:%f",(float)sum/count);
}
