#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    long long a;
    long long s;
    cin>>t;

    while(t--)
    {
        cin>>a;
        s = 0;
        while(a > 0)
        {
            s = s+ (2*a);
            a = floor(a/2);
        }

        cout<<s<<"\n";
    }

}
