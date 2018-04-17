#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    string s;

    while(t--)
    {
        cin>>s;

        int i=0;
        int n = s.size();

        int d = 0;

        while(i <= n/2)
        {
            d += abs(s[i] - s[n-1-i]);
            i++;
        }

        cout<<d<<"\n";
    }

    return 0;
}
