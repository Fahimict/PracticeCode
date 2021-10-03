/// Find Nth fibonacci number
#include<stdio.h>
void main()
{
    int f=0,s=1,n,t,i;

    n=4;

    for(i=0;i<n;i++)
    {
        if(i<=1)
            t=i;
        else{
            t=f+s;
            f=s;
            s=t;
        }
    }
    printf("%d ",t);
}
