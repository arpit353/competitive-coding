#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a,b,temp;

    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b;

        set<int> s;

        for(int i=0;i<=n;i++)
        {
            temp = n*a+(n-i)*b;
            s.insert(temp);
        }

        for(set<int>::iterator it = s.begin();it!= s.end();it++)
        {
            cout<<*it<<" ";
        }

        cout<<"\n";
    }


    return 0;
}
