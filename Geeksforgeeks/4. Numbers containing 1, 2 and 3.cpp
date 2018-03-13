#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;

    long long n,t;

    while(q--)
    {
        cin>>n;

        long long c = 0;

        vector<long long> v;

        for(int i=0;i<n;i++)
        {
            cin>>t;
            int d;

            long long s = t;
            int f = 1;

            while(t>0)
            {
                d = t%10;
                t = t/10;

                if(d<1 || d>3)
                {
                    f = 0;
                    break;
                }

            }

            if(f==1)
            {
                v.push_back(s);
            }

        }

        if(v.size() == 0)
            cout<<"-1";
        else
        {
            sort(v.begin(),v.end());

            for(vector<long long>::iterator it = v.begin();it!= v.end(); it++)
            {
                cout<<*it<<" ";
            }
        }

        cout<<"\n";

    }
}
