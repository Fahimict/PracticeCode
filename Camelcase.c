#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    scanf("%[^\n]s",s);
    int i=0,j=0,n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==' '){
            if(s[i+1]>='a'&&s[i+1]<='z')
             s[i+1]=s[i+1]-32;
        }
       
        else
            s[j++]=s[i];
    }
    s[j]='\0';
    printf("%s",s);
}
