#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    int x[n];
    string s[n];

    int m[100];

    memset(m, 0, sizeof(m));

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>s[i];

        if(i< n/2)
        {
            s[i] = "-";
        }

        m[x[i]]++;
    }

    int start[100];

    start[0] = 0;

    for(int i=1;i<100;i++)
    {
        start[i] = m[i-1];
        m[i] = m[i]+m[i-1];
    }

    int xs[n];
    string ss[n];

    for(int i=0;i<n;i++)
    {
        //xs[start[x[i]]] = x[i];
        ss[start[x[i]]] = s[i];

        start[x[i]]++;
    }

    for(int i=0;i<n;i++)
    {

        cout<<ss[i]<<" ";
    }

    return 0;
}
