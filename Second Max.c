#include<stdio.h>
void main()
{
    int n,i,max1,max2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    max1=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
            max1=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<max1)
            max2=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<max1&&a[i]>max2)
            max2=a[i];
    }

    printf("Second Max = %d\n",max2);
}
