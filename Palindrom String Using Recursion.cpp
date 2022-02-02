#include <iostream>
#include<string>
using namespace std;
bool isPalindrome(string str,int start,int end)
{
    if(start >= end) //base case
    return true;
    else{
        //if mismatch happens false will be returned else true
        return ((str[start] == str[end]) && isPalindrome(str,start+1,end-1));
    }
}
int main()
{
    string str;
    cin>>str;
    int n=str.size();
    if(isPalindrome(str,0,n-1))
    cout<<"Palindrome\n"<<endl;
    else
    cout<<"Not Palindrome\n"<<endl;
    return 0;
}
