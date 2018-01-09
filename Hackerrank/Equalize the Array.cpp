#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n;

    int total = n;

    map<int,int> m;

    int maximum = -1;

    while(n--)
    {
        cin>>t;
        m[t]++;

        if(m[t] > maximum)
        {
            maximum = m[t];
        }

    }

    cout<<total-maximum;

    return 0;
}
