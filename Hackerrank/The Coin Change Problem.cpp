#include<bits/stdc++.h>
using namespace std;

#define N 1000

int look_up[N][N];

int coins_ways(int n,vector<int> c, int m,int i)
{
    int temp,ways=0;

    if(n == 0)
    {
        return 1;
    }

    if(i==m-1)
    {
        return 0;
    }

    if(n <0)
    {
        return 0;
    }

    if(look_up[n][i] != -1)
    {
        return look_up[n][i];
    }

    for(int j=i;j<m;j++)
    {
        temp = coins_ways(n-c[j],c,m,j);
        ways+=temp;
    }

    look_up[n][i] = ways;

    cout<<n<<" "<<i<<" "<<ways<<"\n";

    return ways;
}

int main()
{
    int n,m,temp;

    cin>>n>>m;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            look_up[i][j] = -1;
        }
    }

    vector<int> c;

    for(int i=0;i<m;i++)
    {
        cin>>temp;
        c.push_back(temp);
    }

    int ways = 0;

    for(int i=0;i<m;i++)
    {
        temp = coins_ways(n-c[i],c,m,i);
        ways+=temp;
    }

    cout<<ways<<"\n";

}
