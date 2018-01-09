#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    int c =0,r=0,t,cost=0;

    for(int i=0;i<n;i++)
    {
        t = a.front();
        a.erase(a.begin());

        cost = cost + ((r+1)*t);

        c++;

        if(c%k==0)
        {
            r++;
            c=c%k;
        }
    }

    cout<<cost;

    return 0;
}
