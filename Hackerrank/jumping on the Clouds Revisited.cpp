#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a,e=100;

    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(i%k ==0)
        {
            if(a==1)
                e-=3;
            else
                e-=1;
        }
    }

    cout<<e;
}
