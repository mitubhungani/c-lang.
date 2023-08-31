#include<stdio.h>

main(){
	char a[3];
	int i;
	
	printf("Enter  string:");
	scanf("%[^\n]",&a);
	
	printf("Upper case:");
	for(i=0;i<=3;i++){
		if(a[i]>=65 && a[i]<=90){
			printf("%c" ,a[i]+32);
		}
		else if(a[i>=97] && a[i]<=122){
			printf("%c",a[i]-32);
		}
	}	
}

