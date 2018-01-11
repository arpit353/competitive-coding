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
        if(m[i]>0)
        {
            for(int i=0;i<m[i];i++)
            {
                cout<<i<<" ";
            }
        }
    }

    return 0;
}
