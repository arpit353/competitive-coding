#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],b[n],c_left[n],c_right[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        c_left[i] = 1;
        c_right[i] = 1;
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    c_left[0] = 0;
    c_right[n-1] = 0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] + b[i] >= a[j])
            {
                c_left[j] = 0;
            }
            else
            {
                break;
            }
        }
    }

    for(int i=n-1;i>0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i] - b[i] <= a[j])
            {
                c_right[j] = 0;
            }
            else
            {
                break;
            }
        }
    }

    int flag1=0,flag2=0;

    for(int i=0;i<n;i++)
    {
        if(c_left[i]==1)
        {
            flag1 = 1;
        }

        if(c_right[i]==1)
        {
            flag2 = 1;
        }

    }

    if(flag1 == 1 && flag2 ==1)
    {
        cout<<"NONE";
    }
    else if(flag1 == 0 && flag2 == 1)
    {
        cout<<"LEFT";
    }
    else if(flag2==0 && flag1 == 1)
    {
        cout<<"RIGHT";
    }
    else if(flag2==0 && flag1 == 0)
    {
        cout<<"BOTH";
    }

    return 0;

}
