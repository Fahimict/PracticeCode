#include<stdio.h>
void main()
{
    int n,c=0,d,r;
    scanf("%d",&n);
    scanf("%d",&d);
    while(n!=0)
    {
        r=n%10;
        if(r==d)
            c++;
        n=n/10;
    }
    printf("Frequency of %d is  %d\n",d,c);
}
