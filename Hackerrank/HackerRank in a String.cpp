#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;
    string h = "hackerrank";

    while(t--)
    {
        cin>>s;

        int i=0,j=0;

        while(i<s.size())
        {
            if(s[i] == h[j])
            {
                j++;
            }

            i++;
        }

        if(j== h.size())
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

    }

    return 0;
}
