#include <stdio.h>
int main()
{
    int a[3][3],i,j,sum1=0,sum2=0;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
            if(i+j==2)
            {
                sum2=sum2+a[i][j];
            }
        }
    }
    printf("The sum of diagonal elements is %d\n",sum1);
    printf("The sum of anti-diagonal elements is %d\n",sum2);
    return 0;
}
