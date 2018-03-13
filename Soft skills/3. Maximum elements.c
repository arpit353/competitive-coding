#include<stdio.h>

int main()
{
    int n;
    int k;

    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&k);

    int temp;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    for(int i=0;i<k;i++)
        printf("%d ",a[i]);

    return 0;
}
