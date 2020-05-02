#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v1;
    long long k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 1; i < n; i++)
        v1[i] = v1[i] + v1[i - 1];

    long long sum = v1[k-1]; // starting element sum 
    int res = 1;
    for(int i=k;i<n;i++)
    {
        long long temp = v1[i] -v1[i-k];
      //  cout<<temp<<"\n";
        if(temp<sum)
        {
            sum=temp;
            res=(i-k+1)+1; 
        }
    }
    cout<<res<<"\n";
}
