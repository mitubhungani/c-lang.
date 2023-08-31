#include<stdio.h>
#include<string.h>

main(){
	
	char email[20],password[20],user[20],pass[20];
	int cmp1,cmp2;
	
	printf("---------------Enter Login Deteils------------------\n");
	
	printf("Enter your User name:");
	gets(email);
	
	printf("Enter password:");
	gets(password);
	
	printf("---------------Enter Deteils------------------\n");
	
	printf("Enter your User name:");
	gets(user);
	
	printf("Enter password:");
	gets(pass);
	
	cmp1 =strcmp(email,user);
	cmp2 =strcmp(password,pass);
	
	if(cmp1==0 &&cmp2==0){
			printf("Login Succesful..");
	}
	else{
		printf("Login not Succesful..");
	}
}
