#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int flag = 0;

    for(int i=2;i<= ceil(sqrt(n));i++)
    {
        if(n%i ==0)
        {
            flag = 1;
            break;
        }
    }

    if(flag ==0)
    {
        //printf("%.2f\n",sqrt(n));
        printf("%.2f\n",floor(100*sqrt(n))/100); // for not rounding off
        //cout<<fixed<<setprecision(2)<<sqrt(n);
    }
    else
    {
        cout<<"-1";
    }

    return 0;
}
