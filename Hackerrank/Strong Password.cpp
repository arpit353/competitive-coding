#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;

    cin>>s;

    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    int a=1,b=1,c=1,d=1;

    for(int i=0;i<n;i++)
    {
        if( numbers.find(s[i]) != string::npos)
        {
            a=0;
        }
        else if( lower_case.find(s[i]) != string::npos)
        {
            b=0;
        }
        else if( upper_case.find(s[i]) != string::npos)
        {
            c=0;
        }
        else if( special_characters.find(s[i]) != string::npos)
        {
            d=0;
        }
    }

    int required = 0;

    if(a==1)
        required++;

    if(b==1)
        required++;

    if(c==1)
        required++;

    if(d==1)
        required++;


    if(n+required <6)
    {
        required = required + (6 - n+required);
    }

    cout<<required;

    return 0;
}
