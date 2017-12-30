#include<iostream>

using namespace std;

int main()
{
    int n,k,q,page=1,counter=0;


    cin>>n;


    cin>>k;

    for(int i=0; i<n; i++)
    {

        cin>>q;

        int p= q/k;

        if (q%k >0)
        {
            p++;
        }

        int q_no=1;

        for( int j= page; j<= page+p;j++)
        {
            int l=0;
            while( l<k && q_no <= q )
            {
                if( q_no == j)
                    counter++;
                q_no++;
                l++;
            }
        }

        page= page+p;

    }

    cout<<counter<<"\n";

return 0;


}
