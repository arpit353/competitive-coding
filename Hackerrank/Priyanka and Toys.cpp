#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int c=0,temp;

    for(int i=0;i<n;i++)
    {
        c++;

        temp = v[i];

        while(v[i+1] <= temp+4)
            i++;

    }

    cout<<c;

    return 0;
}
