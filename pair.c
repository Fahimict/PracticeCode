#include<stdio.h>
int main()
{
    int n,i,j,total;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&total);

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(a[i]+a[j]==total)
            printf("{%d,%d}, ",a[i],a[j]);
        }
    }
    return 0;
}
