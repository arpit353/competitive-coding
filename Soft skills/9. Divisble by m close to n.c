#include<stdio.h>
#include<math.h>

int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        int r = n%m;

        int a;

        if(n<0)
        {
            a = m*((n/m)-1) - n;
        }
        else
        {
            a = m*((n/m)+1) - n;
        }

        printf("%d %d\n",r,a);

        if(abs(r) < abs(a))
        {
            printf("%d", n-r);
        }
        else
        {
            printf("%d",n+a);
        }

    }

    return 0;

}
