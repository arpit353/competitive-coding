#include<iostream>

using namespace std;

int main()
{
    string test;

    cin>>test;

    int c[26];

    for(int i=0;i<26;i++)
    {
        c[i]=0;
    }


    for(int i=0;i<test.length();i++)
    {
        c[test[i]-'a']++;
    }

    int n = 0;

    for(int i=0;i<26;i++)
    {
        if(c[i] %2 !=0)
        {
            n++;
            if(n==2)
            {
                break;
            }

        }
    }


    if(n==2)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }

    return 0;

}
