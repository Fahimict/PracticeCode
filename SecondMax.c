#include<stdio.h>
int main()
{
    int n,i,j,temp,max1,max2;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }

   }

   for(i=n-1;i>0;i--)
   {
       if(a[i-1]<a[i])
       {
           printf("%d ",a[i-1]);
           break;
       }
   }
}
