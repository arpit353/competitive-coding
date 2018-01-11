#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,u;

    cin>>l>>r;

    int m = -1;

    for(int i=l;i<=r;i++)
    {
        for(int j=i;j<=r;j++)
        {
            u = i^j;

            if(u > m)
            {
                m = u;
            }
        }
    }

    cout<<m;

    return 0;
}
