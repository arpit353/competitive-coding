#include<bits/stdc++.h>
using namespace std;

int check_substring(string a, string b)
{
    int flag;
    for(int i=0; i<a.size() - b.size()+1; i++)
    {
        flag = 1;
        for(int j=0,k=i;j<b.size();j++,k++)
        {
            if(a[k] != b[j])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            break;
        }

    }

    return flag;

}


int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        string a,b;

        cin>>a;
        cin>>b;

        int i = check_substring(a,b);

        cout<<i<<"\n";
    }

    return 0;
}
