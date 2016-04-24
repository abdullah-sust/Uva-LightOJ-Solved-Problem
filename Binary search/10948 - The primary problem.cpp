#include<cstring>
#include<cstdio>
using namespace std;
bool arr[1000002];
long long int  prime[78498];
long long int j,k,i,cnt,a,p,m,n;
int main()
{
    prime[0]=2;
    cnt=0;
    memset(arr,0,sizeof(arr));
    for(i=3;i<=1000000;i+=2)
    if(arr[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=1000000;j+=k)
        arr[j]=1;
    }


    int start, end,item,mid,diff,y;
    while(scanf("%lld",&a)==1)
    {
        p=0;
        if(a==0)
        break;
        diff=0;
        for(i=0;i<=78496;++i)
        {
            y=a-prime[i];
            item=y;
            start=i+1;
            end=78497;
            mid=(start+end)/2;
            while((prime[mid]!=item)&&(start<=end))
            {
                if(item>prime[mid])
                start=mid+1;
                else
                end=mid-1;
                mid=(start+end)/2;
            }
            if((prime[mid]==item))
            {
                m=prime[i];
                n=item;
                p=1;
                break;
            }
        }
        if(p==0)
        printf("%lld:\nNO WAY!\n",a);
        else
        printf("%lld:\n%lld+%lld\n",a,m,n);
    }
    return 0;
}
