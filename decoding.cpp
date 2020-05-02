#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char res[n];
    int mid= (n+1)/2;
    int f,b;
    int start=0;
    if(n%2==1)
    {
        res[mid-1]=s[0];
        start =1; 
        f=mid+1;
        b=mid-1;
    }
    else
    {
        b=mid;
        f=mid+1;
    }
    int i=start;
    f=f-1;
    b=b-1;
    while(i<n)
    {
        res[b]=s[i];
        i++;
        res[f]=s[i];
        i++;
        b=b-1;
        f=f+1;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<res[i];
    }
    cout<<"\n";
}
