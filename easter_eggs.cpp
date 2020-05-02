#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[7];
    s[0]="ROYGBIV";
    s[1]="G";
    s[2]="GB";
    s[3]="GBI";
    s[4]="ROYG";
    s[5]="ROYGB";
    s[6]="ROYGBI";
    string res;
    while(n>0)
    {
        if(n-7>=0)
        {
            res.append(s[0]);
            n=n-7;
        }
        else
        {
            res.append(s[n]);
            n=0;
            break;
        }
    }
    cout<<res<<"\n";

}
