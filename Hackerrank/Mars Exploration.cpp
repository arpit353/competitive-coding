#include<bits/stdc++.h>

using namespace std;

int main()
{
    string t;

    cin>>t;

    int c=0;

    for(int i=0;i<t.length();i+=3)
    {
        if(t[i] != 'S')
            c++;

        if(t[i+1] != 'O')
            c++;

        if(t[i+2] != 'S')
            c++;

    }

    cout<<c;

}
