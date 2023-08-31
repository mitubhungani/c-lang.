#include<stdio.h>

main(){
	char a[20];
	int i;
	
	printf("Enter  string:");
	scanf("%[^\n]",&a);
	
	printf("Upper case:");
		if(a[0]>=65 && a[0]<=90){
			printf("%c" ,a[0]);
		}
		else if(a[0>=97] && a[0]<=122){
			printf("%c",a[0]-32);
		}
	for(i=1;i<=30;i++){
		if(a[i]>=65 && a[i]<=90){
			printf("%c" ,a[i]+32);
		}
		else if(a[i>=97] && a[i]<=122){
			printf("%c",a[i]);
		}
	}	
}

