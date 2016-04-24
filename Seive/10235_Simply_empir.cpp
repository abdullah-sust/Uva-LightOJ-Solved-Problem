#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
long long int visit[1000011],prime[78498],i,j,item,beg,mid,end;
int  main()
{
    long long int  cnt,k,pri,num,p;
    prime[0]=2;
    cnt=0;
    memset(visit,0,sizeof(visit));
    for(i=3;i<=1000011;i+=2)
    if(visit[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=1000011;j+=k)
        visit[j]=1;
    }
    //printf("%lld\n",prime[78498]);
    while(scanf("%lld",&num)==1)
    {
        p=0;
        if(num==0)
        break;
        for(i=0;i<=cnt;++i)
        {
            item=num-prime[i];
            beg=0;
            end=cnt;
            mid=(beg+end)/2;
            while(beg<=end&&prime[mid]!=item)
            {
                if(prime[mid]>item)
                end=mid-1;
                else
                beg=mid+1;
                mid=(end+beg)/2;
            }
            if(prime[mid]==item)
            {
                p=1;
                break;
            }
        }
        if(p==1)
        printf("%lld = %lld + %lld\n",num, prime[i],num-prime[i]);
        else
        printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
