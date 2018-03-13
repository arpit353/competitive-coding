#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    long long n,k;

    while(t--)
    {
        cin>>n>>k;

        int w = (k-1)/2;

        cout<<n-w<<" ";

        for(int i=0;i<k-1;i++)
        {
            if(i%2 ==0)
            {
                cout<<"0 ";
            }
            else
            {
                cout<<"1 ";
            }
        }
    }

    return 0;
}
