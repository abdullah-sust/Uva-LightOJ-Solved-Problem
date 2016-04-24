#include"bits/stdc++.h"
using namespace std;
long long int arr[1000005],prime[78499];
int main()
{
    long long int a,n,i,j,k,cnt,num1,num2,num,visit,l,cas;
    prime[0]=2;
    //memset(prime,0,sizeof(prime));
    memset(arr,0,sizeof(arr));
    //i=2;
    cnt=0;
    for(i=3;i<=1000000;i+=2)
    if(arr[i]==0)
    {
        k=i+i;
        prime[++cnt]=i;
        for(j=i*i;j<=1000000;j+=k)
            arr[j]=1;
    }
    //sort(prime,prime+1+cnt);
    //printf("%lld\n",prime[cnt]);
    //printf("%lld\n",cnt);
    k=-1;
    for(i=0;i<=cnt;++i)
    {
        a=prime[i];
        for(j=a*a;j<=1000000000000;j*=a)
        arr[++k]=j;
    }
    //printf("%lld\n",k);
    scanf("%lld",&cas);
    while(cas--)
    {
        scanf("%lld %lld",&num1,&num2);
        visit=0;
        int p;
        for(a=0;a<80070;++a)
            if((arr[a]>=num1)&&(arr[a]<=num2))
            ++visit;
        printf("%lld\n",visit);
    }
    return 0;
}
