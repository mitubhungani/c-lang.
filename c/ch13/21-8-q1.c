#include<stdio.h>

struct stud{
	int Id;
	char Name[20];
	float Per;
};

void main(){
	FILE *fp,*db;
	struct stud s;
	
	fp = fopen("C:\\Users\\123\\Desktop\\mitu.txt","r");
	db = fopen("C:\\Users\\123\\Desktop\\mitu1.txt","a");
	
	if(fp == NULL || db == NULL){
		printf("file is not found");
		return;
	}
	fscanf(fp,"%d%s%f",&s.Id,&s.Name,&s.Per);
	fprintf(db,"\n%d\t%s\t%.2f\n",s.Id,s.Name,s.Per);
	
	fclose(fp);
	fclose(db);
}
