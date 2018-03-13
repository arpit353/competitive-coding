#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    int maximum=0,minimum=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

        if(v[i] ==1)
        {
            maximum++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(v[i] ==1)
        {
            minimum++;
            v[i+1] = 0;
        }
    }

    cout<<minimum<<" "<<maximum<<"\n";
    return 0;
}
