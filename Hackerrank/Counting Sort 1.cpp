#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    map<int,int> m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }

    for(int i=0;i<100;i++)
    {
        cout<<m[i]<<" ";
    }

    return 0;
}
