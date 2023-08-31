#include<stdio.h>

main(){
	
	int r,c;
	
	printf("Enter Row:");
	scanf("%d",&r);
	
	printf("Enter column:");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Average of An Array: ");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum=(sum + a[i][j]);
		}
	}
	printf("%f",(float)sum/(r+c));
}
