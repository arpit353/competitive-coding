#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;

    cin>>n>>t;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    int i=0;

    int c = 0;

    while(t >0)
    {
        if(t - a[i] <0)
            break;

        t = t - a[i];
        c++;

    }

    cout<<c;

    return 0;
}
