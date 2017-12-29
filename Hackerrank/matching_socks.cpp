#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int> m;
    int n,t;

    cin>>n;
    int c=0;


    while(n--)
    {

        cin>>t;

        if(m.find(t) == m.end() || m[t] == -1)
        {
            m[t] = 0;
        }
        else
        {
            m[t] = -1;
            c++;
            cout<<t<<"\n";
        }
    }

    cout<<c<<"\n";

    return 0;

}
