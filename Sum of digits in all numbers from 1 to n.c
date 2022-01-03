#include<stdio.h>
void main()
{
    int n,sum=0,r,i,temp;
   scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r;
            temp=temp/10;
        }
    }

    printf("Sum= %d",sum);
}
