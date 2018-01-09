#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t;

    cin>>n>>k;

    vector<int> p(n);

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    sort(p.begin(),p.end());

    int c=0;

    while(k>=0)
    {
        t = p.front();
        p.erase(p.begin());

        k = k-t;
        c++;
    }

    cout<<c;

    return 0;
}
