#include<stdio.h>
int main()
{
    char s[100];
    gets(s);
    int alp,digit,space,word,i,vowel,consonant;
    alp=digit=space=word=vowel=consonant=0;
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='A'&&s[i]<='Z') ||(s[i]>='a'&&s[i]<='z'))
        {
            alp++;
        if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u')
          vowel++;
        else
            consonant++;
        }


        else if(s[i]>='0'&&s[i]<='9')
            digit++;
        else if(s[i]==' '&&s[i+1]!=' ')
            space++;

    }
    word=space+1;
    ///consonant=alp-vowel;
    printf("Alphabet= %d\nVowel=%d\n Consonant= %d\n Digit=%d \nWord= %d\n space= %d",alp,vowel,consonant, digit,word,space);
    return 0;
}
