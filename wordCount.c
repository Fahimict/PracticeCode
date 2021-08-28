#include<stdio.h>
void main()
{
    char str[100];
    ///gets(str);
    scanf("%[^\n]s",str);
    int i,count=0;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
            count++;
    }
    printf("The number of word %d",count+1);
}
