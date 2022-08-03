/*Given a string str, extract all integers words from it.
Example:
Input: str = "1Hello2 &* how are y5ou"
Output: 1 2 5
Input: str = "Hey everyone, I have 500 rupees and I would spend a 100"
Output: 500 100*/
#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,n;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>=48&&s[i]<58)
        {
            printf("%c",s[i]);
            if(s[i+1]<48||s[i+1]>57)
           }     printf(" ");

    }
}
