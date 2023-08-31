#include<stdio.h>

main(){
	
	char p[20];
	int a,b,c=0,d=0,e=0,f=0,g=0;
	
	printf("Enter Password:");
	scanf("%[^\n]",&p);
	
	for(a=0;a<=strlen(p);a++){
		if(p[a]>=65 && p[a]<=90){
			c++;
		}
		else if(p[a]>=97 && p[a]<=122){
			d++;
		}
		else if(p[a]>=48 && p[a]<=57){
			e++;
		}
		else{
			f++;
		}
	}
	g=c+d+e+f;
	if(g>8 && c>0 && d>0 && e>0 && f>0){
		printf("Password is strong");
	}
	else{
		printf("Password is not-strong");
	}
	printf("\n %d",g);
		printf("\n %d",f);
}
