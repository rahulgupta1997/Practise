#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long f=0;
    long long b=0;
    map<int,int>ma;
    for ( int i = 0; i < n; i++)
    {
        int x;
        cin >>x;
        ma[x]=i;
    }
    int m;
    cin>>m;
    for ( int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        f+=ma[x]+1;
        b+=n-ma[x];
    }
    cout<<f<<" "<<b<<"\n";
}
