#include<iostream>
#include<iomanip>

#define array_size 1000
using namespace std;

int main()
{
    int a[array_size];
    int t;
    cout<<"Enter the number of test cases \n";
    cin>>t;

    while(t--)
    {
        
        int temp,n;

        cout<<"Enter the number of element \n";
        cin>>n;

        int max_number = -1;
        int second_max = -1;
        int max_number_count = 0;
        int second_max_count = 0;

        for(int i=0;i<n;i++)
        {
            cin>>temp;

            if(max_number < temp)
            {
                second_max = max_number;
                second_max_count = max_number_count;
                max_number = temp;
                max_number_count = 1;
            }
            else if(max_number == temp)
            {
                max_number_count++;   
            }
            else if(second_max < temp)
            {
                second_max = temp;
                second_max_count=1;
            }
            else if(second_max == temp)
            {
                second_max_count++;
            }
        }


        float f;

        if(max_number_count == 1)
        {
            f = second_max_count;
        }
        else
        {
            f = max_number_count*(max_number_count-1);
            f = f/2;
        }

        float t;

        t = n*(n-1);
        t = t/2;

        cout<<"f is "<<f<<" t is "<<t<<"\n";

        cout<<"The probability is "<<fixed<<setprecision(6)<<f/t<<"\n";

    }

    return 0;
}
