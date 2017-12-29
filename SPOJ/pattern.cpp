#include<iostream>

using namespace std;

int main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		
		int x,y;
		cin>>x>>y;
		
		for(int i=0;i<=x*3;i++)
		{
			for(int j=0;j<=y*3;j++)
			{
				if(i%3==0)
				{
					cout<<"*";
				}
				else if(j%3==0)
				{
					cout<<"*";
				}
				else
				{
					cout<<".";
				}
			}
			cout<<"\n";
		}
		
		cout<<"\n";
	}

return 0;

}









