#include<stdio.h>
#include<string.h>

void arrayIn(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}	
}

void arraySum(int a[],int n)
{
		int i;
		int z=0;
		for(i=0;i<n;i++)
		{
			z += a[i];
		}
		printf("Sum Of Array Is %d",z);
}

void stringIn(char a[])
{
	
	printf("Enter String : ");
	gets(a);
}

void stringLen(char a[])
{
		int s=0;
		
		s=strlen(a);

		printf("Length Of String Is : %d",s);
}

void validPsw(char a[])
{
	int i,l,sp=0,uc=0,lc=0,dg=0,sc=0;
	printf("Enter Password : ");
	gets(a);
	
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		if(a[i]==' '){
			sp++;
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			uc++;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			lc++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			dg++;
		}
		else
		{
			sc++;
		}
	}
	
		if(sp==0 && uc>=1 && lc>=1 && dg>=1 && sc>=1 && l>=8)
			{
				printf("Your Password Is Valid");
			}
		else
		{
			printf("Your Password Is Invalid");
		}
}

