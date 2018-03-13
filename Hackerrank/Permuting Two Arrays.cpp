#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());

        int flag = 1;
        for(int i=0;i<n;i++)
        {
            if(a[i] +b[i]<k)
            {
                flag=0;
                cout<<"NO\n";
                break;
            }
        }

        if(flag ==1)
            cout<<"YES\n";
    }

    return 0;

}
