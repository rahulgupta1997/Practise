#include <bits/stdc++.h>
using namespace std;
long long int helper(vector<long long int> v ,long long int s)
{


}

int main()
{
    long long int n;
    long long int s;
    cin >> n;
    cin>>s;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v[i] = x;
    }
    cout << helper(v ,s) << "\n";
}
