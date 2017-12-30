#include<bits/stdc++.h>
using namespace std;

int check_util(string s, long long a)
{
    int i=0;

    while(i<s.size())
    {
        string t = to_string(a);
        int l = t.size();

        for(int j=0;j<l;j++)
        {
            if(s[i] != t[j])
                return -1;

            i++;
        }

        a++;
    }

    return 0;
}

int check(string s)
{
    int r=-1;
    for(int i=1;i<=s.size()/2;i++)
    {
        string temp = s.substr(0,i);
        //cout<<temp<<"\n";


        stringstream geek(temp);
        long long a;
        geek>>a;

        r = check_util(s,a);

        if(r !=-1)
        {
            r = i;
            break;
        }


    }

    return r;
}

int main()
{
    int q;
    cin>>q;

    string s;

    while(q--)
    {
        cin>>s;

        int a = check(s);

        if(a != -1)
        {
            cout<<"YES "<<s.substr(0,a)<<"\n";
        }
        else
        {
            cout<<"NO "<<"\n";
        }

    }

    return 0;
}
