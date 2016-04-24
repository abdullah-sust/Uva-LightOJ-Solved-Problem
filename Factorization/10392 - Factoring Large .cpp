#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
long long int  arr[1000000],prime[5725359];
int main ()
{
    long long int num,cnt,i,j,k,baki;
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

    while(scanf("%lld",&num)==1)
    {
        if(num<0)
        break;
        i=0;
        for(i=i;((prime[i]*prime[i])<=num)&&i<=cnt;++i)
        if(num%prime[i]==0)
        {
            printf("    %lld\n",prime[i]);
            num/=prime[i];
            --i;
        }
        printf("    %lld\n\n",num);
    }
    return 0;
}
