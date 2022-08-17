#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i,j=0;
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]!=' ')
            str[j++]=str[i];
    }
    str[j]='\0';
    printf("%s\n",str);
}
