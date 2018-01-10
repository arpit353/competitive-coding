#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,m,s;

    while(t--)
    {
        cin>>n>>m>>s;

        cout<<(m+s-1)%n;
    }

    return 0;
}
