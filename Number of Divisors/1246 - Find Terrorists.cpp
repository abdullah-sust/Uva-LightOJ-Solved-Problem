#include<cstdio>
#include<cstring>
using namespace std;
int prime[10000];
int arr[10001];
int temp[10000];
int cnt,i,j,k;
int main()
{
    prime[1]=2;
    cnt=1;
    memset(arr,0,sizeof(arr));
for(i=3;i<=10000;i+=2)
if(arr[i]==0)
{
    prime[++cnt]=i;
    k=i+i;
    for(j=i*i;j<=10000;j+=k)
    arr[j]=1;
}
memset(arr,0,sizeof(arr));
int a,b,num,n,get;
for(a=2;a<=10000;++a)
{
    num=0;
    n=a;
    for(i=1;i<=n;++i)
    if(n%i==0)
    ++num;
    for(i=1;i<=cnt;++i)
    if(prime[i]==num)
    {
        arr[a]=1;
        break;
    }
}

    scanf("%d",&n);
    for(k=1;k<=n;++k)
    {
        get=0;
        scanf("%d %d",&a,&b);
        j=0;
        for(i=a;i<=b;++i)
        if(arr[i]==1)
        {
            get=1;
            temp[++j]=i;
        }

        if(get==0)
        printf("-1\n");else
        {

        for(i=1;i<j;++i)
        printf("%d ",temp[i]);
        printf("%d\n",temp[i]);

        }
    }
    return 0;
}
