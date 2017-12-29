#include<bits/stdc++.h>

using namespace std;

int cost(vector<int> arr,int n, int i,int prev)
{
    if(i == n)
    {
        return 0;
    }

    int maximum = arr[i];
    int minimum  = 1;

    int max_cost = abs(maximum-prev)+cost(arr,n,i+1,maximum);
    int min_cost = abs(minimum-prev)+cost(arr,n,i+1,minimum);

    return max(max_cost,min_cost);

}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int prev=-1;
        vector<int> arr;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }

        int max_cost = arr[0]+cost(arr,n,1,arr[0]);
        int min_cost = 1+cost(arr,n,1,1);


        cout<<max(max_cost,min_cost)<<"\n";
    }
}
