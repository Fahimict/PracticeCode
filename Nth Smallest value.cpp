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
    sort(a,a+n);/// Time complexity is O(nlogn)
        printf("%dth smallest value  %d\n",k,a[k-1]);
        printf("%dth largest value %d\n",k,a[n-k]);
}
