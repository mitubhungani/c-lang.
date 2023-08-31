#include<stdio.h>

void main(){
	
	int a=547;
	int *b;
	
	b=&a;
	
	printf("A: %d\n",a);
	printf("B: %d\n",*b);
	
	a=10000;
	
	printf("A: %d\n",a);
	printf("B: %d\n",*b);
	
	*b=12;
	
	printf("A: %d\n",a);
	printf("B: %d\n",*b);
}
