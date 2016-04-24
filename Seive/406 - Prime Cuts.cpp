#include"bits/stdc++.h"
using namespace std;
long long int arr[10000000],prime[1000000];
int main()
{
    long long int a,n,i,j,k,cnt,num1,c,size,num2,num,visit,l,cas,m;
    prime[0]=2;
    cnt =0;
    for(i=3;i<=10000000;i+=2)
    if(arr[i]==0)
    {
        k=i+i;
        prime[++cnt]=i;
        for(j=i*i;j<=10000000;j+=k)
        arr[j]=1;
    }

    while(scanf("%lld %lld",&k,&num2)==2)
    {
        printf("%lld %lld:",k,num2);
        num1=k;
        arr[0]=1;
        for(i=0,l=0;prime[i]<=num1;++i)
            arr[++l]=prime[i];

        size=l+1;

        if(size%2==0)
        {
            size-=2;
            c=num2*2;

            if(size>=c)
            {
                size/=2;

                for(i=size-num2+1,l=0;l<c;++i,++l)
                printf(" %lld",arr[i]);
            }
            else
            {
                printf(" 1");
                for(i=0;prime[i]<=k;++i)
                printf(" %lld",prime[i]);
            }
        }
        else
        {
            size-=2;
            c=num2*2-1;
            if(size>=c)
            {
                size=size/2+1;
                for(i=size-num2+1,l=0;l<c;++i,++l)
                printf(" %lld",arr[i]);
            }
            else
            {
                printf(" 1");
                for(i=0;prime[i]<=k;++i)
                printf(" %lld",prime[i]);
            }

        }
        printf("\n\n");
    }
    return 0;
}
