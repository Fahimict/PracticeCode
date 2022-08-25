#include<stdio.h>
int sumDigit(int n)
{
   if(n==0)
        return 0;
   else
        return n%10+sumDigit(n/10);
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=sumDigit(n);
    printf("Sum = %d\n",sum);
    return 0;
}
