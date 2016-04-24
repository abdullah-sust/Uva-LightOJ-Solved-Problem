#include<cstdio>
//#include<cmath>
using namespace std;

long long int bigmod(long long int x,long long int y,long long int z)
{
    long long int a;
    if(y==0)
    return 1;
    else if(y%2==0)
    {
        a=bigmod(x,y/2,z);
        return (a*a)%z;
    }
    else
    return ((x%z)*(bigmod(x,y-1,z)%z));
}

int main()
{
    long long int a,m,n,x,y,z;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        //scanf("%lld",&m);
        while(n--)
        {
            scanf("%lld %lld %lld",&x,&y,&z);
            a=bigmod(x,y,z);
            printf("%lld\n",a%z);
        }
    }

    return 0;
}
