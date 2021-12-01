#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r1,r2,d;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;

    if(d<0)
    {
        printf("R1= %.2lf + i%.2lf\n",-b/(2*a), sqrt(-d)/(2*a));
        printf("R2= %.2lf - i%.2lf\n",-b/(2*a), sqrt(-d)/(2*a));
    }
    else
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("R1= %.2lf & R2 = %.2lf",r1,r2);
    }
    return 0;
}
