#include <bits/stdc++.h>
using namespace std;
long long int helper(vector<long long int> v)
{
    int curr = 0;
    int tot = v[0];
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int x = v[i - 1] - v[i]; 
        //when increasing energy 
        if (x >= 0)
        {
            curr=curr+x;
        }
        else
        {
            if(curr+x>=0)
            {
                curr=curr+x;
            }
            else
            {
                tot+=-(curr+x);
                curr=0;   
            }
        }
    }
    return tot;
}

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
