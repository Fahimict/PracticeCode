#include<stdio.h>
int main()
{
    int s,e,i,count,n;
    scanf("%d %d",&s,&e);
    if(s<2)
        s=2;
    for(n=s;n<=e;n++)
    {
        count =0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }
        if(count==0)
            printf("%d ",n);
    }

    return 0;
}
