#include<stdio.h>

main(){
	int a,b,s;
	for(a='A';a<='E';a++){
		for(s='A';s<=5-a;s++){
			printf(" ");
		}
		for(b=a;b>='A';b--){
			printf("%c",b);
		}
		printf("\n");
	}
}
