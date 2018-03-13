#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    int k;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        float a[n];

        int c = 0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if( fmod(a[i],k) ==0)
            {
                c++;
            }

        }

        cout<<"c is "<<c<<"\n";

        sort(a,a+n);

        int i=0;

        int r = 0;
        int h;


        if(n%2==0)
        {
            h = n/2;
        }
        else
        {
            h = n/2 +1;
        }

        while(c < h)
        {
            cout<<"i is "<<i<<" "<<a[i]<<"\n";
            if(fmod(a[i],k)==0)
            {
                i++;
            }
            else
            {
                r += k*ceil(a[i]/k) - a[i];
                c++;
                i++;
            }
            cout<<"r is "<<r<<" and c is "<<c<<"\n";
        }

        cout<<r<<"\n";

    }

    return 0;
}
