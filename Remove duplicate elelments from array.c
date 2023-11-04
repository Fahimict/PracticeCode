#include<stdio.h>
int main()
{
    int a[10],n=5,i,c=0,temp[10],d=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        c=0;
        for(j=i;j>0;j--)
        {
            if(a[i]==a[j-1])
                c++;
        }
        if(c==0)
            a[d++]=a[i];
    }
    //temp[c]=a[n-1];
    for(i=0;i<d;i++)
      printf("%d ",a[i]);
}
