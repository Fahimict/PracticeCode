#include<stdio.h>
void main()
{
    int n,a[10]={0},r,i;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        a[r]++;
        n=n/10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>1)
            printf("%d is repeated %d times\n",i,a[i]);
    }
}
