#include<bits/stdc++.h>
using namespace std;

int check_prime(int n)
{
    int flag = 1;

    if(n == 1)
    {
        return 0;
    }

    for(int i=2; i<=sqrt(n);i++)
    {
        if(n%i ==0)
        {
            flag =0;
            break;
        }
    }

    if(flag == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}

int main()
{

    int t;

    cin>>t;

    while(t--)
    {
        int x,y;

        cin>>x>>y;

        for(int i=x;i<=y;i++)
        {
            int g = check_prime(i);

            if(g == 1)
            {
                cout<<i<<"\n";
            }

        }

        cout<<"\n";
    }

    return 0;
}
