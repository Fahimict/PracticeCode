#include<stdio.h>
int gcdR(int a,int b)///GCD using recursion
{
    if(b==0)
        return a;
    else
        return gcdR(b,a%b);
}
int main()
{
    int a,b,r,gcd,lcm;
    scanf("%d%d",&a,&b);
    int n1=a,n2=b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    gcd=a;
    printf("GCD = %d & LCM = %d\n",gcd,(n1*n2)/gcd);
    return 0;
}
