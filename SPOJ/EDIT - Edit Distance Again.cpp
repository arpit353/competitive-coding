#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int t;
	cin>>t;
	
	while(t--)
	{
		string s;
		int cost1=0,cost2=0;
		cin>>s;
		
		for(int i=0;i<s.length();i++)
		{
			if(i%2 == 0)
			{
				if(isupper(s[i]))
				{
					cost2++;
				}
				else
				{
					cost1++;
				}
			}
			else
			{
				if(islower(s[i]))
				{
					cost2++;
				}
				else
				{
					cost1++;
				}
			}
			
		}
		
		if(cost1 > cost2)
		{
			cout<<cost2<<"\n";
		}
		else
		{
			cout<<cost1<<"\n";
		}
		
	}
	
	return 0;
}
