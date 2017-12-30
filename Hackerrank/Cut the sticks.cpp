#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        cin>>t;
        a[t]++;
    }

    cout<<n<<"\n";

    for(int i=0;i<n;i++)
    {
        if(a[i] != 0 && n-a[i] != 0)
            cout<<n-a[i]<<"\n";
    }

    return 0;
}
