#include<stdio.h>
main()
{
	int i,n1,n2,n;
	int b=0;
	
		printf("Enter: ");
		scanf("%d",&n1);
		
		printf("Enter: ");
		scanf("%d",&n2);
		
		n=n2-n1;
		int a[n];
		
		for(i=n1;i<=n2;i++){
				
				if(i%4==0)
				{
					a[b]=i;
					b++;
					
				}
		}
		printf("Leap year:\n");
		for(i=0;i<b;i++){
			printf("a[%d] = %d\n",i,a[i]);
		}
}
