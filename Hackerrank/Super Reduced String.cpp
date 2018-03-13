#include<iostream>

using namespace std;

int main()
{
    string s,r="";

    cin>>s;

    int i=0;

    while(i<s.size())
    {
        if(s[i] == s[i+1])
        {
            i = i+2;
        }
        else
        {
            r+=s[i];
            i++;
        }
    }

    cout<<r;

    return 0;

}
