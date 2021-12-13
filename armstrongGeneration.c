#include<stdio.h>
#include<math.h>
void main()
{
    int n,temp,i,r,j,temp2,temp3,c;
    double sum=0;
    i=2000;

    for(n=1;n<=i;n++)
    {
        temp=n;
        sum=0;
        temp2=n;
        c=0;
        while(temp2!=0)
        {
            temp2=temp2/10;
            c++;
        }

        while(temp!=0)
        {
            r=temp%10;
            if(c<3)
                c=3;
            sum=sum+pow(r,c);
            temp=temp/10;
        }
        if(n==(int)sum)
            printf("%d ",n);
    }


}
