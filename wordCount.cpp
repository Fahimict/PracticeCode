#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int c=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' '&&s[i+1]!=' ')
            c++;
    }
    cout<<"The number of word in given line is  "<<c+1<<endl;
    return 0;
}
