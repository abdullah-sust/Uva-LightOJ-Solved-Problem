#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
unsigned arr[1000000],prime[5725359];
int main ()
{
    long long int num;
    unsigned cnt,i,j,k,baki;
    prime[0]=2;
    cnt=0;
    for(i=3;i<=1000000;i+=2)
    if(arr[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=1000000;j+=k)
        arr[j]=1;
    }
    cnt;
    //printf("awal\n");

    while(scanf("%lld",&num)==1)
    {
        if(num==0)
        break;
        printf("%lld =",num);
        if(num<0)
        {
            printf(" -1 x");
            num*=-1;
        }
        i=0;
        for(i=i;((prime[i]*prime[i])<=num)&&i<=cnt;++i)
        if(num%prime[i]==0)
        {
            //printf("%u",prime[i]);
            printf(" %u x",prime[i]);
            num/=prime[i];
            --i;
        }
        i=sqrt((double)(num));
        for(;(i*i<=num)&&i>=2;++i)
        if(num%i==0)
        {
            printf(" %lld x",i);
            num/=i;
            --i;
        }
        printf(" %lld\n",num);
    }
    return 0;
}
