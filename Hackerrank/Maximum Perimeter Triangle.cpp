#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=n-1;i>1;i--)
    {
        if(a[i] < a[i-1]+a[i-2])
        {
            cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i];
            return 0;
        }
    }

    cout<<"-1";
    return 0;
}
