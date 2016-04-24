#include<cstring>
#include<cstdio>
using namespace std;
long long int  arr[31700];
long long int  prime[31700];
int main()
{
    long long int cnt,i,j,k;
    memset(arr,0,sizeof(arr));
    prime[0]=2;
    cnt=0;
    for(i=3;i<=31699;i+=2)
    if(arr[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=31699;j+=k)
        arr[j]=1;
    }
    //printf("%lld %lld\n\n",cnt,prime[cnt]);
    long long int num,mul,m,num1,num2,cas,div,n;
    scanf("%lld",&cas);
    while(cas--)
    {
        div=0;
        n=0;


        scanf("%lld %lld",&num1,&num2);
        if(num1==1&&num2==1)
        {
            printf("Between %lld and %lld, 1 has a maximum of 1 divisors.\n",num1,num2);
            continue;
        }
        for(cnt=num1;cnt<=num2;++cnt)
        {
            i=0;
            mul=1;
            j=-1;
            num=cnt;
        for(i=0;(prime[i]*prime[i])<=num;++i)
        if(num%prime[i]==0)
        {
            arr[++j]=prime[i];
            num/=prime[i];
            --i;
        }
        arr[++j]=num;
        for(i=0;i<=j;++i)
        {
            k=0;
            m=arr[i];
            while((m==arr[i])&&(i<=j))
            {
                ++k;
                ++i;
            }
            --i;
            mul*=(k+1);
        }
        if(mul>div)
        {
            n=cnt;
            div=mul;
        }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",num1,num2,n,div);
    }
    return 0;
}
