#include<stdio.h>

void main(){
	int i,j,a=1;
	
	for(i=1;i<5;i++){
		for(j=0;j<i;j++){
			printf("%d ",a++);
		}
		printf("\n");
	}
}