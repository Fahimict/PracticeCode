#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    cin>>k;
    sort(a,a+n);
        printf("%d ",a[k-1]);
}
