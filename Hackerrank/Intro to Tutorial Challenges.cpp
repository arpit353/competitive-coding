#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,z;

    cin>>n>>t;

    vector<int> a(t);

    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=0;i<t;i++)
    {
        if(a[i] == n)
        {
            cout<<a[i]<<"\n";
            return 0;
        }
    }

    return 0;
}
