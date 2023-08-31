#include<stdio.h>
#include "4-8-main.c"

void main(){
	int x;
	printf("Enter Array Size :  ");
	scanf("%d",&x);
	
	int a[x];
	arrayIn(a,x);
	arraySum(a,x);
}
