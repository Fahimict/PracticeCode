///sum of the digits of a number
///untill the sum is reduced to a single digit input:12345 output:6
#include<stdio.h>
int main()
{
    int sum = 0,rem,num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    while(num / 10 != 0)
    {
        sum = 0;
        while(num != 0)
        {
            rem = num % 10;
            sum =sum+ rem;
            num = num / 10;
        }

        num = sum;
    }

    printf("%d", sum);
    return 0;
}
