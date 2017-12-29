#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0,c=0;

    while(i<n-1)
    {
        if(a[i+2] ==1)
        {
            i++;
        }
        else
        {
            i+=2;
        }

        c++;
    }

    cout<<c<<"\n";

}
