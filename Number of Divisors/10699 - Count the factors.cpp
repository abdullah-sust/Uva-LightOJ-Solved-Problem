#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long int arr[1000005],prime[78500];
int main()
{
    long long int i,j,k,cnt;
    cnt=0;
    memset(arr,0,sizeof(arr));
    prime[0]=2;
    for(i=3;i<=1000000;i+=2)
    if(arr[i]==0)
    {
        k=i+i;
        prime[++cnt]=i;
        for(j=i*i;j<=1000000;j+=k)
        arr[j]=1;
    }

    long long int a,num,c;
    while(scanf("%lld",&num)==1)
    {
        if(num==0)
        break;
        c=num;
        for(i=0,j=-1;num>=(prime[i]*prime[i]);++i)
        if(num%prime[i]==0)
        {
            arr[++j]=prime[i];
            num/=prime[i];
            --i;
        }
        arr[++j]=num;
        sort(arr,arr+1+j);
        a=0;
        for(i=0;i<=j;++i)
        {
            if(i==0)
            {
                ++a;
                cnt=arr[i];
            }
            else if(cnt==arr[i])
            ;
            else
            {
                cnt=arr[i];
                ++a;
            }

        }
        printf("%lld : %lld\n",c,a);
    }
    return 0;
}
