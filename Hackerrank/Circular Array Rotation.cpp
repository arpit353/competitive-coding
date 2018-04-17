#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q;

    cin>>n>>k>>q;

    vector<int> a(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int j=0;j<k;j++)
    {
        int temp = a[n-1];

        for(int i=n-1;i>0;i--)
        {
            a[i] = a[i-1];
        }

        a[0] = temp;

    }

    int t;

    for(int i=0;i<q;i++)
    {
        cin>>t;
        cout<<a[i]<<"\n";
    }

    return 0;

}
