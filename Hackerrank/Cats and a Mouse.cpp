#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int d1,d2;

    while(n--)
    {
        cin>>a>>b>>c;
        d1 = abs(c-a);
        d2 = abs(c-b);

        if(d1 == d2)
        {
            cout<<"Mouse C\n";
        }
        else if(d1 > d2)
        {
            cout<<"Cat B\n";
        }
        else
        {
            cout<<"Cat A\n";
        }
    }

    return 0;
}
