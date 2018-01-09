#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;

    cin>>a>>b;

    unordered_map<char,int> c;

    for(int i=0;i<a.length();i++)
    {
        c[a[i]]++;
    }

    for(int i=0;i<b.length();i++)
    {
        c[b[i]]--;
    }

    int counter=0;

    for(char d = 'a';d<='z';d++)
    {
        counter+=abs(c[d]);
    }

    cout<<counter;

    return 0;

}
