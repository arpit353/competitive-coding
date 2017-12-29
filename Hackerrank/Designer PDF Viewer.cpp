#include<bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int> m;
    int temp;

    for(char i='a';i<='z';i++)
    {
        cin>>temp;
        m[i] = temp;
    }

    string w;
    int maximum=-1;

    for(int i=0;i<w.size();i++)
    {
        if(m[w[i]] > maximum)
            maximum = m[w[i]];
    }

    int area = w.size()*maximum;

    cout<<area;
}
