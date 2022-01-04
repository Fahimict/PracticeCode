#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    gets(s);
    int i=0,j=0,n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        s[i+1]=s[i+1]-32;///s[i+1]=toupper(s[i+1]);
        else
            s[j++]=s[i];
    }
    s[j]='\0';
    printf("%s",s);
}
