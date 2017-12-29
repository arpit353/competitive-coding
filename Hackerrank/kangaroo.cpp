#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int u;
    int x;
};

int main()
{
    Node a,b;
    Node g,s;

    cin>>a.u>>a.x>>b.u>>b.x;

    if( a.u > b.u)
    {
        g=a;
        s = b;
    }
    else
    {
        g=b;
        s=a;
    }

    if(g.x >= s.x)
    {
        cout<<"NO \n";
        return 0;
    }
    else
    {
        int diff_speed = s.x-g.x;
        int diff_start = g.u - s.u;

        if(diff_start % diff_speed == 0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }

    return 0;

}
