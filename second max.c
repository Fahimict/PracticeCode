#include<stdio.h>
int main()
{
    int n,i,max1,max2;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max1=a[0];
    max2=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max1)
            max1=a[i];
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>max2&&a[i]<max1)
            max2=a[i];
    }
    printf("Max1 = %d max2 = %d",max1,max2);
}