#include<stdio.h>

void main(){
	FILE *db, *ab;
	
	db = fopen("C:\\Users\\123\\Desktop\\exam.txt","w");
	ab = fopen("C:\\Users\\123\\Desktop\\exam-2.txt","w");
	
	int i;
	for(i=50; i<70;i++){
		if(i%2 == 0){
			fprintf(db,"%d ",i);
		}
		else{
			fprintf(ab,"%d ",i);
		}
	}
}
