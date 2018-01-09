#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;

    cin>>n>>k;

    vector<long long> a(n);

    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    long long d = 1000000007;

    for(long long i=0;i<n-k+1;i++)
    {
        //cout<<a[i]<<" "<<a[i+k-1]<<" "<<a[i+k-1] - a[i]<<"\n";
        if( d> a[i+k-1] - a[i])
        {
            d = a[i+k-1] - a[i];
        }
    }

    cout<<d;

    return 0;
}
