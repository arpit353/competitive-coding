#include<bits/stdc++.h>
using namespace std;

bool compare(string a,string b)
{
if( a.length() == b.length())
{
return a<b;
}
else
{
return a.length()< b.length();
}
}

int main()
{

int n;
cout<<"Enter the number of elements \n";
cin>>n;

string temp;
vector<string> a;

for(int i=0;i<n;i++)
{
cin>>temp;
a.push_back(temp);
}

sort(a.begin(),a.end(),compare);

for(int i=0;i<n;i++)
{
    cout<<"The elements of the array are "<<a[i]<<"\n";
}


return 0;
}


