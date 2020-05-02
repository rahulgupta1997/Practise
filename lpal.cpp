#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string str  =s;
    reverse(str.begin(), str.end()); 
    cout<<s+str<<"\n";
}
