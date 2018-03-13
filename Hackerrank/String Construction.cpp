#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;

    set<int> u;

    while(t--)
    {
        u.clear();
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            u.insert(s[i]);
        }

        cout<<u.size()<<"\n";
    }

    return 0;
}
