#include<bits/stdc++.h>

using namespace std;

int main()
{
    int w,t;

    cin>>w>>t;

    int a[w];

    for(int i=0;i<w;i++)
        cin>>a[i];

    int i,j;

    while(t--)
    {
        cin>>i>>j;

        int m = INT_MAX;

        for(int k=i;k<=j;k++)
        {
            if(a[i]<m)
                m = a[i];

        }

        cout<<m<<"\n";
    }

    return 0;
}
