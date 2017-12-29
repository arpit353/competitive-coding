#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp;

    cin>>n;

    unordered_map<int,int> m;

    int maximum = -1;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(m.find(temp) == m.end())
        {
            m[temp] =1;
            if(m[temp] > maximum)
                maximum = m[temp];
        }
        else
        {
            m[temp]++;
            if(m[temp] > maximum)
                maximum = m[temp];
        }

        if(m.find(temp+1) != m.end())
        {
            m[temp+1]++;
            if(m[temp+1] > maximum)
                maximum = m[temp+1];
        }

        if(m.find(temp-1) != m.end())
        {
            m[temp-1]++;
            if(m[temp-1] > maximum)
                maximum = m[temp-1];
        }
    }

    cout<<maximum<<"\n";
}
