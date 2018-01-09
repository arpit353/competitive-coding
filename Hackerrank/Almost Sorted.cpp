#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    int flag = 0,t=0;

    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> p;

    int c=0;

    for(int i=0;i<n;i++)
    {
        if(a[i+1] <a[i])
        {
            c++;
            p.push_back(i);
        }
    }

    if(c==0)
    {
        cout<<"Yes";
        return 0;
    }

    if( p.size() ==2 && a[p[0]-1] <= a[p[1]] <= a[p[0]+1] && a[p[1]-1] <= a[p[0]] <= a[p[1]+1] )
    {
        cout<<"swap "<<p[0]<<" "<<p[1]<<"\n";
        return 0;
    }

    int d = 0;

    vector<int> r;

    for(int i=0;i<n;i++)
    {
        if(a[i] > a[i+1] && d==0)
        {
            d =1;
            r.push_back(i);
        }
        if(a[i] <= a[i+1] && d==1)
        {
            d =0;
            r.push_back(i);
        }
    }

    if(r.size() == 2)
    {
        cout<<"reverse "<<r[0]<<" "<<r[1];
        return 0;
    }

    cout<<"no";

    return 0;

}
