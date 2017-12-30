#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        string o = s;

        reverse(s.begin(),s.end());

        int flag = 0;

        for(int i=0;i<s.size();i+=2)
        {
            if(o[i+1]-o[i] != s[i+1]-s[i])
            {
                flag  = 1;
                break;
            }
        }

        if(flag ==0)
        {
            cout<<"Funny \n";
        }
        else
        {
            cout<<"Not funny \n";
        }

    }

    return 0;

}
