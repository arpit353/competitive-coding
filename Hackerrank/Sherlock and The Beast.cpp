#include<iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;

    long long n;

    while(t--)
    {
        cin>>n;

        long long t=0,f=0;

        int i = 0,flag=0;
        for(i=0;i<=n;i+=5)
        {
            //cout<<n-i<<" "<<i<<"\n";
            if((n-i)%3 ==0)
            {
              //  cout<<"Hello";
                t = i;
                f= n-i;
                flag = 1;

                break;
            }
        }

        if(flag == 0)
        {
            cout<<"-1\n";
            continue;
        }


        string s="";

        for(int i=0;i<f;i++)
        {
            s+='5';
        }

        for(int i=0;i<t;i++)
        {
            s+='3';
        }


        cout<<s<<"\n";
    }
}
