#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,rem,c;
    cin>>t;

    long long a;

    while(t--)
    {
        c=0;
        cin>>a;

        while(a!=0)
        {
            rem = a%10;

            if(rem !=0)
            {
                if(a%rem ==0)
                {
                    c++;
                }
            }

            a = a/10;
        }

        cout<<c<<"\n";
    }
}
