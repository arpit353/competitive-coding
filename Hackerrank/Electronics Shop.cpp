#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    long long s,temp;
    cin>>s>>n>>m;

    vector<long long> a,b;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    for(int i=0;i<m;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long maximum = -1;

    for(int i=m-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(b[i]+a[j] =<s && maximum < b[i]+a[j])
            {
                maximum = b[i]+a[j];
            }
        }
    }

    cout<<maximum<<"\n";

}
