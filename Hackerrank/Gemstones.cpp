#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;

    int c[26];

    for(int i=0;i<26;i++)
        c[i]=0;

    for(int i=0;i<n;i++)
    {
        cin>>s;

        for(int j=0;j<s.length();i++)
        {
            if(c[s[j]-'a'] != -1)
            {
                c[s[j]-'a']++;
            }
        }

        for(int j=0;j<26;j++)
        {
            if(c[j] ==0)
            {
                c[j] = -1;
            }
        }
    }

    int counter = 0;

    for(int i=0;i<26;i++)
    {
        if(c[i] > 0)
        {
            counter++;
        }
    }

    cout<<counter;

    return 0;

}
