#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;

    cout<<"Enter the number of test cases \n";
    cin>>t;

    while(t--)
    {
        int r,c;

        cout<<"Enter the number of rows and column \n";
        cin>>r>>c;

        char pattern[c];
        int cost2=0,cost1=0;

        for(int i=0;i<r;i++)
        {
            cin>>pattern;
            for(int j=0;j<c;j++)
            {
            	if( (i+j)%2 ==0)
            	{
            		if(pattern[j] == 'R')
            		{
            			cost2+=5;
            		}
            		else
            		{
            			cost1+=3;
            		}
            	}
            	else
            	{
            		if(pattern[j] == 'G')
            		{
            			cost2+=3;
            		}
            		else
            		{
            			cost1+=5;
            		}	
            	}
            }
        }
        
        if(cost1 < cost2)
        {
        	cout<<cost1<<"\n";
		}
		else
		{
			cout<<cost2<<"\n";
		}

    }

    return 0;
}
