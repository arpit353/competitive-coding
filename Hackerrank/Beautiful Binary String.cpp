#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    string a;

    cin>>a;

    int c=0;

    for(int i=2;i<n-2;i++)
    {
        if(a[i]=='0' && a[i+1]=='1' && a[i-1]=='1' && a[i+2] =='0' && a[i-2]=='0' )
        {
            a[i] = '1';
            c++;
        }
    }

    for(int i=1;i<n-1;i++)
    {
        if(a[i]=='1' && a[i+1]=='0' && a[i-1]=='0')
        {
            c++;
        }
    }

    cout<<c;

    return 0;
}
