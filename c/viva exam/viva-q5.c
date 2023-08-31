#include<stdio.h>
struct employe{
	int id;
	char name[20];
	char add[20];
	char email[20];
    char role[20];
	int salary;
};
void main(){
	int i,n;
	printf("Enter Number of employee = ");
	scanf("%d",&n);
	struct employe e[n];
	for(i=0; i<n; i++){
		
		printf("enter id\t = ");
		scanf("%d",&e[i].id);
		
		printf("enter name\t = ");
		fflush(stdin);
		scanf("%s",&e[i].name);
		
		printf("enter address\t = ");
		scanf("%s",&e[i].add);
		
		printf("enter role\t = ");
		scanf("%s",&e[i].role);
		
		printf("enter email\t = ");
		scanf("%s",&e[i].email);
		
		printf("enter salary\t = ");
		scanf("%d",&e[i].salary);
		
	printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	}
	
	printf("\n\n\nId\tName\taddress\trole\temail\tsalary\n==== ==== ==== ==== ==== ==== \n");
	for(i=0; i<n; i++){
		printf("%d\t%s\t%s\t%s\t%s\t%d\n",e[i].id,e[i].name,e[i].add,e[i].role,e[i].email,e[i].salary);
		
	}
	
}
