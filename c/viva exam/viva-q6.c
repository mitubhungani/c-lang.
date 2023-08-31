#include<stdio.h>

void main(){
	FILE *db,*op;
	
	db = fopen("C:\\Users\\123\\Desktop\\viva-1.txt","r");
	
	op = fopen("C:\\Users\\123\\Desktop\\viva-2.txt","w");

	char a[100];
	
	
	fscanf(db,"%s",&a);
	fprintf(op,"%s",a);
	
	fclose(db);
	fclose(op);
	
}
