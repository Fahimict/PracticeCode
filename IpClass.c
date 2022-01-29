#include<stdio.h>
int main()
{
    char ip[100];
    int i,sum=0;
    gets(ip);
    for(i=0;ip[i]!='.';i++)
    {
        sum=sum*10+ip[i]-48;
    }
    if(sum>=0&&sum<=127)
        printf("Class A\n");
    else if(sum>=128&&sum<=191)
        printf("Class B\n");
    else if(sum>=192&&sum<=223)
        printf("Class c");
    else if(sum>=224&&sum<=239)
        printf("Class D");
    else if(sum>=240&&sum<=255)
        printf("Class E\n");
    else
        printf("Invalid IP\n");

}
