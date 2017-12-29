#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n][n],x,y;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j] = 0;
        }
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    
    int q;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(a[x][y] == 1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    
    return 0;
}
