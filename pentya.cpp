#include <bits/stdc++.h>
using namespace std;
long long int helper(vector<long long int> v)
{

    long long int curr = 0;
    long long int max_c = 0;
    int n = v.size();
    if(n==1 || n==2)
    return n;

    long long int ma[n];
    long long int mi[n];
    ma[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] <= v[i])
        {
            ma[i] = ma[i - 1] + 1;
        }
        else
        {
            ma[i] = 1;
        }
    }
    mi[n - 1] = 1;
    for (int i = n - 1; i >0; i--)
    {
        if (v[i-1] >= v[i])
        {
            mi[i-1]=mi[i]+1;
        }
        else
        {
            mi[i-1]=1;
        }
    }
    /*
    for(int i=0;i<n;i++)
    {
        cout<<ma[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<mi[i]<<" ";
    }
    cout<<"\n";*/
    for(int i=1;i<n;i++)
    {
        curr =ma[i-1]+mi[i];
        max_c= max(curr ,max_c);
    }
    return max_c;
};

int main()
{
    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v[i] = x;
    }
    cout << helper(v) << "\n";
}
