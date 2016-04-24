#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,c,d,L,i,mod,sum;

    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5)
    {
        if(a==0&&b==0&&c==0&&d==0&&L==0)
        break;
        sum=0;
        for(i=0;i<=L;++i)
        {
            mod=(a*i*i+b*i+c)%d;
            if(0==mod)
            ++sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
