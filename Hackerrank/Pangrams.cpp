#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int> m;

    string s;

    cin>>s;
    int i=0;

    while(i<s.size())
    {
        m[s[i]]++;
        i++;
    }

    if(m.size() == 26)
    {
        cout<<"pangram";
    }
    else
    {
        cout<<"not pangram";
    }


    return 0;
}
