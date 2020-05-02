#include <bits/stdc++.h>
using namespace std;
long long int helper(vector<pair<int, int>> v, long long int s)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int count = s;
    int i = n - 1;
    long long sum = 0;
    while (i >= 0)
    {
        if (count - v[i].second > 0)
        {
            count = count - v[i].second;
            sum = sum + (v[i].first * v[i].second);
        }
        else
        {
            if (count - v[i].second == 0)
            {
                sum=sum+(v[i].first*v[i].second);
                break;
            }
            else
            {
                sum = sum + (v[i].first * count);
                break;
            }
        }
        i--;
    }
    return sum;
}
int main()
{
    long long int n;
    long long int s;
    cin >> n;
    cin >> s;
    vector<pair<int, int>> v(s);
    for (long long int i = 0; i < s; i++)
    {
        cin >> v[i].second;
        cin >> v[i].first;
    }
    cout << helper(v, n) << "\n";
}
