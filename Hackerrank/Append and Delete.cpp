#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;

    cin>>a>>b;

    int o;

    cin>>o;



    int c=0;

    for(int i=0;i< min(a.length(),b.length()) ;i++)
    {
        if(a[i] == b[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }

    int d = a.length()+b.length()-c-c;

    if(o <d)
    {
        cout<<"No";
        return 0;
    }

    o=o-d;

    while(c>0 && o>0)
    {
         o = o-2;
         c = c-1;

         if(o == 0)
         {
             cout<<"Yes";
             return 0;
         }
    }

    if(o>=0)
    {

        cout<<"Yes";
    }
    else
    {

        cout<<"No";
    }

    return 0;
}
