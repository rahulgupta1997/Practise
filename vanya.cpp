#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int l;
    cin >> n;
    cin >> l;

    map<int, int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (m.find(x) == m.end())
        {
            v.push_back(x);
            m[x] = 1;
        }
    }
    sort(v.begin(), v.end());
    int start = 0;
    int p =0;
    double d=0;
    if (v[0] != 0)
    {
        d = (v[0] - 0);
        p=1;
        start= v[0];
    }
    for (int i = p; i < v.size(); i++)
    {
        double x = v[i] - start;
        x = x / 2;
        if (d < x)
            d = x;
        start = v[i];
    }
    int last = l;
    double x = (last - v[v.size() - 1]);
    d = max(d, x);
    cout << d << "\n";
     cout << fixed << setprecision(10) << d << endl;

}
