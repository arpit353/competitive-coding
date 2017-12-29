#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    vector<int> a;

    int temp;

    for(int i=0;i<m;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    sort(a.begin(),a.end());
    int i=0;

    int maximum = -1;

    for(int i=0;i<a.size();i++)
    {
        if(a[i+1] - a[i] > maximum)
        {
            maximum = a[i+1]-a[i];
        }
    }

    cout<<maximum/2;








}
