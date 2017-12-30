#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m,n;
        cin>>m>>n;

        unordered_map<int,int> h;

        int a;

        for(int i=0;i<n;i++)
        {
            cin>>a;

            if(h.count(n-a) != 0)
            {
                cout<<h[n-a]<<" "<<i<<"\n";
                return 0;
            }

            h[a] = i;

        }

    }


    return 0;
}
