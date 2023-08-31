#include<stdio.h>

main(){
	char a[20],b[20];
	int i,x=0,y=0;
	
	
	printf("Enter Any String: ");
	scanf("%s",&a);
	
	for(i=0; a[i] != NULL; i++){
		x++;
	}
	for(i=0;i<=x;i++){
		b[x-i-1] = a[i];
	}
	for(i=0;i<=x;i++){
		if(b[i]==a[i]){
			y++;
		}
	}
	if(y==x){
		printf("String Is Palindrome.");
	}
	else{
			printf("String Is not Palindrome.");
	
	}
}
