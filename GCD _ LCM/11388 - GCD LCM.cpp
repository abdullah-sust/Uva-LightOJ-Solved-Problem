#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,cas;
    scanf("%lld",&cas);
    while(cas--)
    {
        scanf("%lld %lld",&a,&b);
        if((b%a)==0)
        printf("%lld %lld\n",a,b);
        else
        printf("-1\n");
    }
    return 0;
}
