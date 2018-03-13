#include<stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int a[n],c[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i] = 0;
    }


    int maximum = -1;

    for(int i=n-1;i>=0;i--)
    {
        if(a[i] > maximum)
        {
            maximum = a[i];
            c[i] = 1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(c[i] ==1)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
