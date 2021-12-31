#include <stdio.h>

int main()
{
    char s[100];
    gets(s);
    int alp,digit,word,i;
    alp=digit=word=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A'&&s[i]<='Z') ||(s[i]>='a'&&s[i]<='z'))
        alp++;
        else if(s[i]>='0'&&s[i]<='9')
            digit++;
        else if(s[i]==' '&&s[i+1]!=' ')
            word++;

    }
    word++;
    printf("Alphabet= %d, Digit=%d  Word= %d\n",alp,digit,word);

    return 0;
}
