#include<stdio.h>

void main(){
	FILE *fp;
	int n,i;
	
	fp = fopen("C:\\Users\\123\\Desktop\\m1.txt","a");
	
	for(i=1;i<=50;i++){
		if(i%3==0 && i%5==0){
			fprintf(fp,"%d ",i);
		}
	};
	fclose(fp);
}
