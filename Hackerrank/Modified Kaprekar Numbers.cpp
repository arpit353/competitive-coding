#include<bits/stdc++.h>

using namespace std;

int main()
{
    int s,e;

    cin>>s>>e;

    for(int i=s;i<e;i++)
    {
        int n = i*i;
        int t = i*i;
        int o = i;

        //cout<<"The number is "<<i<<" and its square is "<<n<<"\n";

        float c=0;

        while(n>0)
        {
            c++;
            n = n/10;
        }

        //cout<<"C is "<<c<<"\n";

        int d = ceil(c/2);
        int l = c-d;

        //cout<<"D is "<<d<<"\nL is "<<l<<"\n";

        int left = 0;
        int right = 0;

        int p = 1;

        for(int j=0;j<d;j++)
        {
            left += (t%10)*p;
            p = p*10;
            t = t/10;
        }

        p = 1;

        for(int j=0;j<l;j++)
        {
            right += (t%10)*p;
            p = p*10;
            t = t/10;
        }

        //cout<<"Left is "<<left<<" Right is "<<right<<"\n";

        int flag = 0;

        if(o == left+right)
        {
            cout<<o<<"\n";
            flag = 1;
        }

        if(flag ==0)
        {
            cout<<"INVALID RANGE";
        }

    }

    return 0;
}
