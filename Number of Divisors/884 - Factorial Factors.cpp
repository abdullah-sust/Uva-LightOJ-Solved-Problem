#include<cstdio>
#include<cstring>
using namespace std;
long long int  pri[78500];
long long int  arr[1000000];
long long int  temp[1000000];
long long int  cnt,i,j,k,m,n;
int  main()
{
    memset(arr,0,sizeof(arr));
    pri[1]=2;
    cnt=1;
    for(i=3;i<=1000000;i+=2)
    if(arr[i]==0)
    {
        pri[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=1000000;j+=k)
        arr[j]=1;
    }
    //printf("%lld %lld\n",cnt,pri[cnt]);
    arr[1]=0;
    for(n=2;n<=1000000;++n)
    {
        k=0;
        m=n;
        for(i=1;(pri[i]*pri[i])<=m;++i)
        if(m%pri[i]==0)
        {
            m/=pri[i];
            --i;
            ++k;
        }
        ++k;
        arr[n]=arr[n-1]+k;
    }
    while(scanf("%lld",&n)==1)
    printf("%lld\n",arr[n]);
    return 0;
}
