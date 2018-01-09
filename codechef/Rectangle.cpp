#include<iostream>

using namespace std;

int main()
{
    int n,a,b,c,d;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;

        if(a==b && c==d)
        {
            cout<<"YES\n";
        }
        else if(a==c && d==b)
        {
            cout<<"YES\n";
        }
        else if(a==d && c==b)
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
