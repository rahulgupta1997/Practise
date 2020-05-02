#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long ml;
    cin >> ml;
    string sx;
    cin >> sx;
    char p = sx[0];
    //cout<<p<<endl;
    char arr[n][ml];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < ml; j++)
        {
            arr[i][j] = s[j];
            //cout<<arr[i][j]<<" ";
        }
        // cout<<endl;
    }
    int count = 0;
    map<char, int> m;
    m[p] = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ml; j++)
        {
            if (arr[i][j] == p)
            {
                // up
                if (j - 1 >= 0)
                {
                    if (m.find(arr[i][j - 1]) == m.end()  && arr[i][j-1]!='.')
                    {
                      //  cout<< " its  "<<arr[i][j]<<" checked 1"<< arr[i][j-1]<<endl;
                        m[arr[i][j - 1]] = 1;
                        count++;
                    }
                }
                if (j + 1 < ml)
                {
                    if (m.find(arr[i][j + 1]) == m.end() && arr[i][j+1]!='.')
                    {
                      //  cout<< " its  "<<arr[i][j]<<" checked 2 "<< arr[i][j+1]<<endl;
                        m[arr[i][j + 1]] = 1;
                        count++;
                    }
                }
                if (i + 1 < n)
                {
                    if (m.find(arr[i + 1][j]) == m.end() && arr[i+1][j]!='.')
                    {
                      //  cout<< " its  "<<arr[i][j]<<" checked  3 "<< arr[i+1][j]<<endl;
                        m[arr[i + 1][j]] = 1;
                        count++;
                    }
                }
                if (i - 1 >= 0)
                {
                    if (m.find(arr[i - 1][j]) == m.end() && arr[i-1][j]!='.')
                    {
                      //  cout<< " its  "<<arr[i][j]<<" checked 4 "<< arr[i-1][j]<<endl;
                        m[arr[i - 1][j]] = 1;
                        count++;
                    }
                }
            }
        }
    }
    cout << count << "\n";
}
