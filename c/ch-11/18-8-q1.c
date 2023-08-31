#include<stdio.h>

struct student{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int std;
	char school[20];
};
void main(){
	
	int i,n,id,count=0;
	
	printf("Enter The Number Of Student: ");
	scanf("%d",&n);
	struct student s[n];
	
	
	for(i=0;i<n;i++){
		
		printf("Enter id: ");
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("Enter Name: ");
		scanf("%s",&s[i].name);
		printf("Enter Age: ");
		scanf("%d",&s[i].age);
		fflush(stdin);
		printf("Enter Course: ");
		scanf("%s",&s[i].course);
		printf("Enter City: ");
		scanf("%s",&s[i].city);
		printf("Enter Standard: ");
		scanf("%d",&s[i].std);
		fflush(stdin);
		printf("Enter School: ");
		scanf("%s",&s[i].school);
		printf("\n\n==========================================\n\n");
	}
	
	printf("\nEnter Id: ");
	scanf("%d",&id);
	
	for(i=0;i<n;i++){			
		if(id == s[i].id){
			printf("\n\n\nId\tName\tAge\tCourse\tCity\tStandard\tSchool");
			printf("\n======= ======= ======= ======= ======= ============== ======= \n");
			printf("%d\t%s\t%d\t%s\t%s\t%d\t\t%s",s[i].id,s[i].name,s[i].age,s[i].course,s[i].city,s[i].std,s[i].school);
			count++;
		}
		
	}
	if(count==0)
	{
		printf("Enter Correct id");
	}
}

