#include<bits/stdc++.h>
using namespace std;
stack<int>s1,s2;
///stack<int>s2;
void concat()
{
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
using namespace std;
int main()
{

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s2.push(6);
    s2.push(5);
    s2.push(4);
    concat();
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    return 0;
}
