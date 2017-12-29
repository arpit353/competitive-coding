#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int c=0;

    int v = 0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            c++;
            if(c==0)
            {
                v++;
            }

        }
        else
        {
            c--;
        }
    }

    cout<<v<<"\n";

}
