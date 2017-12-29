#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int> o;

    for(int i=0;i<n;i++)
    {
        if(a[i] %2 !=0)
        {
            o.push_back(i);
        }

    }

    if(o.size() %2 ==0)
    {
        int total=0;
        while(o.size())
        {
            int a = o.front();
            o.erase(o.begin());
            int b = o.front();
            o.erase(o.begin());

            int d = b-a;

            total+=d;

        }

        cout<<total*2<<"\n";
    }
    else
    {
        cout<<"NO";
    }

}
