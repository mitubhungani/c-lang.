#include<stdio.h>
main(){
	char a[20],b[20];
	int i,j,x,y=0;
	printf("Enter Any String: ");
	scanf("%s",&a);
	
	for(i=0;a[i] != NULL;i++){
		y++;
	}
	
	for(i=0;i<y;i++){
	 x=0;
	 
		for(j=0;j<y;j++){
			if(a[j]==a[i]){
				x++;
				
			}
			
		}
		printf("%c ==> %d\n",a[i],x);
	}
	
}
