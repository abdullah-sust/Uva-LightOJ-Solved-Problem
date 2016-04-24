#include <cstdio>
#include<cstring>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int arr[200];
int main()
{
    int a,i,k,j,n,count,bar;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        memset(arr,0,sizeof(arr));
        k=-1;
        for(i=2;i<=n;++i)
        {
            a=i;
            for(j=2;j<=a/2;++j)
            if(a%j==0)
            {
                arr[++k]=j;
                a/=j;
                j=1;
            }
            arr[++k]=a;
        }

        sort(arr,arr+k+1);

        printf("%3d! =",n);

        for(i=0,bar=0;i<=k;++i,++bar)
        {
            j=i;
            count=0;
            while(arr[j]==arr[i])
            {
                ++count;
                ++i;
            }
            --i;
            if(bar%15==0&&bar!=0)
            printf("\n      ");
            printf("%3d",count);
        }
        printf("\n");
    }
    return 0;
}
