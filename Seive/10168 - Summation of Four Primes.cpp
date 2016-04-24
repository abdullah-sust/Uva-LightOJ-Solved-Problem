#include<cstdio>
#include<cstring>
using namespace std;
long long int i,j,k,q,l,m,n,p,arr[3200],prime[3200],num,sum,cnt;
int main()
{
    memset(arr,0,sizeof(arr));
    prime[0]=2;
    cnt=0;
    for(i=3;i<=3200;i+=2)
    if(arr[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=3200;j+=k)
        arr[j]=1;
    }
    while(scanf("%lld",&num)==1)
    {
        p=0;
        if(num<8)
        {
            printf("Impossible.\n");
            continue;
        }
        if(num%2==0)
        {
            printf("2 2 ");
            num-=4;
        }
        else
        {
            printf("2 3 ");
            num-=5;
        }

        for(i=0;i<=cnt;++i)
        {
            q=0;
            p=num-prime[i];
            for(j=0;(prime[j]*prime[j])<=p;++j)
            {
                if(p%prime[j]==0)
                {
                    q=1;
                    break;
                }
                else
                q=0;
            }
            if(q==0)
            break;
        }
        printf("%lld %lld\n",prime[i],p);
        }
    return 0;
}
