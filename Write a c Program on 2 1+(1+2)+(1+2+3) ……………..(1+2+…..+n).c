///Write a c Program on  1+(1+2)+(1+2+3) ……………..(1+2+…..+n)
#include<stdio.h>
void main()
{
    int sum=0,i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }
    }

    printf("Sum= %d ",sum);
}
