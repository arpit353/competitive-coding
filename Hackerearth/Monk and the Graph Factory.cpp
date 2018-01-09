#include<iostream>

using namespace std;

int main()
{

    int n,d,s=0;

    cin>>n;


    for(int i=0;i<n;i++)
    {
        cin>>d;
        s+=d;
    }

    if( (n-1) == (s/2))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}
