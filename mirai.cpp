#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    vector<long long int> v1;
    vector<long long int> v2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    sort(v2.begin(), v2.end());
    for (int i = 1; i < n; i++)
    {
        v1[i] = v1[i] + v1[i - 1];
        v2[i] = v2[i] + v2[i - 1];
    }
    long long q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
        {
            int l;
            int r;
            cin >> l;
            cin >> r;
            if (l != 1)
                cout << (v1[r - 1] - v1[l - 2]) << "\n";
            else
                cout << (v1[r - 1]) << "\n";
        }
        else
        {

            int l;
            int r;
            cin >> l;
            cin >> r;
            if (l != 1)
                cout << (v2[r - 1] - v2[l - 2]) << "\n";
            else
            {
                cout << (v2[r - 1]) << "\n";
            }
        }
    }
}
