#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
long long int  arr[1000000],prime[5725359];
int main ()
{
    long long int num,v;
    long long int  cnt,i,j,k,baki;
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
        if(num==0)
        break;
        v=0;
        if(num<0)
            num*=-1;
        i=0;
        for(i=i;((prime[i]*prime[i])<=num)&&i<=cnt;++i)
        if(num%prime[i]==0)
        {
            arr[v++]=prime[i];
            num/=prime[i];
            --i;
        }
        arr[v]=num;
        j=0;
        for(i=0;i<v;++i)
        {
            if(arr[i]==arr[i+1])
            ;
            else
            {
                j=1;
                break;
            }
        }

        if(j==1)
        printf("%lld\n",num);
        else
        printf("-1\n");
    }
    return 0;
}
