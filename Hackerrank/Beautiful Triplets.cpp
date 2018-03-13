#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;

    cin>>n>>d;

    vector<int> v(n);
    map<long long,int> m;

    long long c=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;

        if(m[v[i]-d] ==1 && m[v[i]-2*d] ==1)
        {
            c++;
        }

    }

    cout<<c<<"\n";

    return 0;
}
