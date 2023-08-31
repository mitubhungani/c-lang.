#include<stdio.h>

main(){
	
	int a,b;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	
	printf("Enter A:");
	scanf("%d",p1);
	printf("Enter B:");
	scanf("%d",p2);
	
	*p1=*p1+*p2;
	*p2=*p1-*p2;
	*p1=*p1-*p2;
	
	printf("\nA: %d\nB: %d",*p1,*p2);
	
}
