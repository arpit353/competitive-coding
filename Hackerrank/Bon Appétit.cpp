#include<bits/stdc++.h>

using namespace std;

int main()
{

long long n,k;

//cout<<"Enter the number of items \n";
cin>>n;

//cout<<"Enter the value of k \n";
cin>>k;

long long a[n],sum=0;

for(int i=0;i<n;i++)
{
cin>>a[i];
if(i!=k)
{
    sum+=a[i];
}
//cout<<"Sum is "<<sum<<"\n";

}

long long charged;

//cout<<"The half of the sum of array is "<<sum/2;
//cout<<"Enter the number of money charged \n";
cin>>charged;

if(charged == sum/2)
{
cout<<"Bon Appetit";
}
else
{
cout<<charged-(sum/2);
}

return 0;
}
