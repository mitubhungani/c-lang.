#include<stdio.h>

void divistion(){
	int a;
	
	printf("Enter Value:");
	scanf("%d",&a);
	
	if(a%3==0 && a%5==0){
		printf("yes");
	}
	else{
		printf("No");
	}
}

void main(){
	divistion();
}
