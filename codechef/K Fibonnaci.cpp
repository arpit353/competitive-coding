#include<iostream>
#define MOD 1000000007

using namespace std;

int main()
{
    int n,k;

    cout<<"Enter the value of n and k \n";
    cin>>n>>k;

    if(n<=k)
    {
        cout<<"1";
        return 0;
    }

    long long a[n];

    for(int i=0;i<k;i++)
    {
        a[i]=1;
    }

    a[k]=k;

    for(int i=k+1;i<n;i++)
    {
        cout<<"Value of a[i-1] is "<<a[i-1]<<" and value of a[i-1-k] is "<<a[i-1-k]<<"\n";
        
        if( a[i-1] >= a[i-1-k] )
        {
        	a[i] = (2*(a[i-1])-(a[i-1-k]))%MOD;
		}
		else
		{
			a[i] = ( 2*(a[i-1])-a[i-1-k]+MOD )%MOD;
		}
        

        cout<<i<<" Value of a[i] is "<<a[i]<<"\n";

    }

    if( a[n-1] > MOD)
    {
        a[n-1] = a[n-1]% MOD;
    }

    cout<<"The value of nth term is "<<a[n-1]<<"\n";


    return 0;

}
