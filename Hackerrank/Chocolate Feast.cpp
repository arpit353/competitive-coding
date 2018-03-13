#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int a,b,k;

    int c,w;

    while(t--)
    {
        cin>>a>>b>>k;
        c= 0;
        w = 0;

        c = a/b;
        w = c;

        int t;

        while(w >= k)
        {
            c += w/k;
            t = w/k;
            w = w%k;
            w+= t;
        }

        cout<<c<<"\n";
    }

    return 0;
}
