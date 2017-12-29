#include<bits/stdc++.h>

using namespace std;

int main()
{

long long n,k;
cin>>n>>k;

long long m= -1;
long long temp;
for(long long i=0;i<n;i++)
{
cin>>temp;
if(temp > m)
{
m=temp;
cout<<"m is "<<m<<"\n";
}
}

if( n>k)
{
    cout<<n-k;
}
else
{
    cout<<"0";
}


return 0;
}
