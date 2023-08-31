#include<stdio.h>

struct stud{
	int roll_no;
	char name[20];
	int c;
	int m;
	int p;
	int total;
	float per;
};
void main(){
	
	int i,n;
	
	printf("Enter Number Of student: ");
	scanf("%d",&n);
	struct stud s[n];
	
	for(i=0;i<n;i++){
		
		printf("Enter id: ");
		scanf("%d",&s[i].roll_no);
		
		fflush(stdin);
		
		printf("Enter Name: ");
		scanf("%s",&s[i].name);
		
		printf("Enter chem-marks:");
		scanf("%d",&s[i].c);
		
		printf("Enter maths marks:");
		scanf("%d",&s[i].m);
		
		printf("Enter phy-marks: ");
		scanf("%d",&s[i].p);
		
		s[i].total=(s[i].c + s[i].m + s[i].p);
		s[i].per=s[i].total/3;
		printf("\n\n==========================================\n\n");
	}
		printf("\n\n\nrool no\tName\tchem-marks\tmaths-marks\tphy-marks\ttotal\tper");
		printf("\n======= ======= ======= ======= ======= ============== ======= \n");
	for(i=0;i<n;i++){			
		
			
			printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\t\t\n",s[i].roll_no, s[i].name, s[i].c, s[i].m, s[i].p, s[i].total, s[i].per);
			
			
			
//			printf("total %d",s[i].total);
//			printf("per %.2f",s[i].per);
		}
}	
