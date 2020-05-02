#include <bits/stdc++.h>
using namespace std;
long long int helper(vector<long long int> v, long long int s)
{
    s = s - 1;
    long long int i, j;
    long long count = 0;
    i = s;
    j = s;
    int n = v.size();
    if (v[s] == 1)
    {
        count++;
    }
    i = i - 1;
    j = j + 1;
    while (i >= 0 || j < n)
    {
       // cout << i << " " << j << "\n";
        if (i >= 0 && j < n)
        {
            if (v[i] == 1 && v[j] == 1)
            {
                count = count + 2;
            }
            i = i - 1;
            j = j + 1;
        }
        else if (i >= 0)
        {
            if (v[i] == 1)
            {
                count++;
            }
            i = i - 1;
        }
        else if (j < n)
        {
            if (v[j] == 1)
            {
                count++;
            }
            j = j + 1;
        }
    }
    return count;
}
int main()
{
    long long int n;
    long long int s;
    cin >> n;
    cin >> s;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        v[i] = x;
    }
    cout << helper(v, s) << "\n";
}
