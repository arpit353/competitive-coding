#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;

    cin>>n;

    priority_queue <int> q;

    for(int i=0;i<n;i++)
    {
        cin>>t;
        q.push(t);
    }

    int s=0;

    for(int i=0;i<n;i++)
    {
        t = q.top();
        q.pop();
        s+= t*pow(2,i);
        //cout<<t<<" "<<s<<"\n";
    }

    cout<<s<<"\n";


}
