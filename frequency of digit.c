#include<stdio.h>
int main()
{
    int n,d,a[10]={0},r;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        a[r]++;
        n=n/10;
    }
    printf("Enter a digit :");
    scanf("%d",&d);
    printf("Frequency of %d is %d",d,a[d]);
}
