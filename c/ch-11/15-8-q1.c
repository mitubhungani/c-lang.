#include<stdio.h>

void main()
{
	int x,i,j;
	printf("Enter Array Size : ");
	scanf("%d",&x);
	
	int a[x],b[x];
	int *p[x];
	int *q[x];
	
	for(i=0;i<x;i++)
	{
		p[i]=&a[i];
		q[i]=&b[i];
		printf("a[%d] : ",i);
		scanf("%d",p[i]);
	}
	for(i=0,j=x-1;i<x,j>=0;i++,j--)
	{
			*q[i]=*p[j];
	}
		printf("\n");
	for(i=0;i<x;i++)
	{
		printf("a[%d] : %d \n",i,*q[i]);
	}
}
