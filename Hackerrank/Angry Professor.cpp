#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,a,c=0;

        while(n--)
        {
            cin>>a;

            if(a >=0)
            {
                c++;
            }
        }

        if(c >= k)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }

    return 0;
}
