#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
        {
            s.erase(s.begin()+i);
        }
    }

    float f = sqrt(s.length());

    int l,u;

    l = floor(f);
    u = ceil(f);


    //cout<<f<<" "<<l<<" "<<u;

    for(int i=0;i<u;i++)
    {
        for(int j=i;j<s.length();j+=u)
        {
            cout<<s[j];
        }
        cout<<" ";
    }

    return 0;

}
