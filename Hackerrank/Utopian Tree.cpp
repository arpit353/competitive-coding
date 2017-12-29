#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;

    while(t--)
    {
        cin>>n;

        long long h=1;

        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                h = h*2;
            }
            else
            {
                h = h+1;
            }
        }

        cout<<h<<"\n";

    }
}
