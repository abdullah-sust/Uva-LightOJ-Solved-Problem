#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a=0,num,n,sum,flag,i;
    while(scanf("%d",&num)==1)
    {
        if(num==0)
        break;
        flag=0;
        for(i=num;i>0;--i)
        {
            sum=0;
            for(n=1;n<=i/2;++n)
            if(i%n==0)
            sum+=n;
            sum+=i;
            if(sum==num)
            {
                printf("Case %d: %d\n",++a,i);
                flag=1;
                break;
            }
        }
        if(flag==0)
        printf("Case %d: -1\n",++a);
    }
    return 0;
}
