#include<stdio.h>

struct emp{
	int id;
	char name[20];
	int age;
	char role[20];
	char city[20];
	int experince;
	char companyname[20];
};
void main(){
	
	int i,n,id,count=0;
	
	printf("Enter The Number Of Employee: ");
	scanf("%d",&n);
	struct emp e[n];
	
	for(i=0;i<n;i++){
		
		printf("Enter id: ");
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("Enter Name: ");
		scanf("%s",&e[i].name);
		printf("Enter Age: ");
		scanf("%d",&e[i].age);
		fflush(stdin);
		printf("Enter role: ");
		scanf("%s",&e[i].role);
		printf("Enter City: ");
		scanf("%s",&e[i].city);
		printf("Enter experince: ");
		scanf("%d",&e[i].experince);
		fflush(stdin);
		printf("Enter company name: ");
		scanf("%s",&e[i].companyname);
		printf("\n\n==========================================\n\n");
	}
	
	printf("\nEnter Id: ");
	scanf("%d",&id);
	
	for(i=0;i<n;i++){			
		if(id == e[i].id){
			printf("\n\n\nId\tName\tAge\tCourse\tCity\tStandard\tSchool");
			printf("\n======= ======= ======= ======= ======= ============== ======= \n");
				printf("%d\t%s\t%d\t%s\t%s\t%d\t\t%s",e[i].id,e[i].name,e[i].age,e[i].role,e[i].city,e[i].experince,e[i].companyname);
				count++;
			}
		}
	
		if(count==0)
	{
		printf("Enter Correct id");
	}
	
}
	

