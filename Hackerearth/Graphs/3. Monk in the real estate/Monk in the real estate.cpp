#include<bits/stdc++.h>

using namespace std;

int main()
{

int t;
cin>>t;

    while(t--)
    {
        int n,x,y;
        cin>>n;

        int c=0;
        set <int> s;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;

            s.insert(x);
            s.insert(y);

        }

        cout<<s.size()<<"\n";

    }

}
