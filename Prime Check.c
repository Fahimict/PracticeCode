#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==0&&n>=2)
        printf("%d is Prime.\n",n);
    else
        printf("%d is not not prime!!\n",n);
}
