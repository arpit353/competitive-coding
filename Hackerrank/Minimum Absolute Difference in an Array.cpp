#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    vector<long long> a;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    long long m = 1000000009;

    for(int i=0;i<n-1;i++)
    {
        int d = abs(a[i+1] -a[i]);

        if(d <m)
        {
            m = d;
        }
    }


    cout<<m;
}
