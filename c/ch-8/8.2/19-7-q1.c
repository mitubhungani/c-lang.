#include<stdio.h>

main(){
	int n1,n2;
	
	printf("Enter Array 1:");
	scanf("%d",&n1);
	
	printf("Enter Array 2:");
	scanf("%d",&n2);
	
	int a[n1],b[n2],i;
	
	printf("\nEnter Array A:\n");
	
	for(i=0;i<n1;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Array B:\n");
	
	for(i=0;i<n2;i++){
		printf("b[%d]",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++){
		printf("%d",a[i]);
	}
	for(i=0;i<n1;i++){
		printf("%d",b[i]);
}
}
