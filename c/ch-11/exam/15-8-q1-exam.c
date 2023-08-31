#include<stdio.h>

void strLen(){
	int n=0,i;
	char a[20],*ptr;
	
	ptr = &a;
	
printf("Enter Any String: ");
scanf("%[^\n]",&*ptr);

for(i=0;a[i]!=NULL;i++){
	n++;
}
printf("The Length of the String Is : %d",n);
}

void main(){
	strLen();
}
