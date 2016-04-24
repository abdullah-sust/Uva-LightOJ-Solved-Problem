#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int visit[32770],prime[3550];
int main()
{
    int cnt,i,j,k,pri,num,n;
    prime[0]=2;
    cnt=0;
    memset(visit,0,sizeof(visit));
    for(i=3;i<=32768;i+=2)
    if(visit[i]==0)
    {
        prime[++cnt]=i;
        k=i+i;
        for(j=i*i;j<=32768;j+=k)
        visit[j]=1;
    }
    while(scanf("%d",&num)==1)
    {
        if(num==0)
        break;
        n=0;
        for(i=0;i<=cnt;++i)
        {
            pri=prime[i]+prime[i];
            if(pri>num)
            break;
            for(j=i;j<=cnt;++j)
            {
                pri=prime[i]+prime[j];
                if(pri==num)
                ++n;
                else if(pri>num)
                    break;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
