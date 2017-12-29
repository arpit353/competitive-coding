#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p;

    cin>>n>>p;

    if(n%2 ==0)
    {
        n++;
    }
    if(p%2 ==0)
    {
        p++;
    }

    if((n-p)/2 < (p-1)/2)
    {
        cout<<(n-p)/2<<"\n";
    }
    else
    {
        cout<<(p-1)/2<<"\n";
    }

    return 0;
}
