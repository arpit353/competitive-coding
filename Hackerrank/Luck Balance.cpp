#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t,i,s=0;

    cin>>n>>k;

    vector<int> imp;

    for(int i=0;i<n;i++)
    {
        cin>>t;
        cin>>i;

        if(i==0)
        {
            s+=t;
        }
        else
        {
            imp.push_back(t);
        }

    }

    sort(imp.begin(),imp.end());

    for(int i=0;i<k;i++)
    {
        s+=imp[i];
    }

    for(int i=k;i<imp.size();i++)
    {
        s-=imp[i];
    }

    cout<<s<<"\n";

}
