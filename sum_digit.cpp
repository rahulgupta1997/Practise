#include <bits/stdc++.h>
using namespace std;
long long int helper(string s)
{
    
    long long int n=s.length();
    if(n==1)
    return 0;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        sum=sum+(s[i]-'0');
    }
    return 1+helper(to_string(sum));
}
int main()
{
    string s;
    cin>>s;
    cout<<helper(s)<<"\n";
}
