#include<iostream>
#include<cmath>
#define MOD 1000000007
using namespace std;

int main()
{
    int t;
    int n,q;
    cin>>t;

    while(t--)
    {
        cin>>n>>q;
        long long x[q];
        long long p=1; //instead of storing the whole array we are storing only the product
        long long temp_d; //temporary d array element

        for(int i=0;i<n;i++)
        {
            cin>>temp_d;
            if(p*temp_d < MOD)
            {
                p*=temp_d;
            }
            else
            {
                p = MOD;
            }

        }

        for(int i=0;i<q;i++)
        {
            cin>>x[i];
            x[i] = floor(x[i]/p);
        }

        for(int i=0;i<q;i++)
        {
            cout<<x[i]<<" ";
        }

        cout<<"\n";
    }

    return 0;
}
