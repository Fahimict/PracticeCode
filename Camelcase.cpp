#include<iostream>
using namespace std;
int main()
{
    string s="I am";
    int i,c=0,n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
        }
        else
            s[c++]=s[i];
    }
    s[c]='\0';

    cout<<s<<endl;
    return 0;
}
