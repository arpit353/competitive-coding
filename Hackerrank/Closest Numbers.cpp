#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    vector<long long> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    long long m = 1000000007;

    vector<long long>s;

    for(int i=0;i<n-1;i++)
    {
        if(a[i+1] - a[i] <m)
        {
            m = a[i+1] - a[i];
            s.clear();
            s.push_back(a[i]);
            s.push_back(a[i+1]);
        }
        else if(a[i+1] - a[i] == m)
        {
            s.push_back(a[i]);
            s.push_back(a[i+1]);
        }
    }

    sort(s.begin(),s.end(),greater<long long>());

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }

    return 0;
}
