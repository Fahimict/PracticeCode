#include<stdio.h>
void main()
{
    int n,i,j,count=0,p=1;
    printf("Enter the number of prime number you want: ");
    scanf("%d",&n);

    for(i=2;p<=n;i++)
    {
        count=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0){
            printf("%d ",i);
            p++;
        }

    }


}
