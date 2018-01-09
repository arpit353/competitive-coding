#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;

    int c;

    cin>>t;

    while(t--)
    {
        cin>>s;
        c = 0;

        for(int i=1;i<=s.length();i++)
        {
            if(s[i] == s[i-1])
            {
                c++;
            }
        }

        cout<<c<<"\n";

    }


    return 0;
}
