#include<stdio.h>

main(){
	
	int r,c;
	
	printf("Enter Row:");
	scanf("%d",&r);
	
	printf("Enter column:");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j,f,sum=0;
	
	printf("Enter A Array");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter b Array");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
