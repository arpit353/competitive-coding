#include<bits/stdc++.h>

using namespace std;

int check(int x,float n)
{

    float a = 1/n;

    cout<<"a is "<<a<<"\n";

    int s = pow(x,a);

    return s;


}

int main()
{
    int x;

    float n;
    cin>>x>>n;


    int h = check(x,n);

    cout<<h;

    return 0;

}
