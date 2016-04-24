#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,m,num[501],i,j,t,dist,mid_val;
    scanf("%d",&n);
    while(n--)
    {
        dist=0;
        scanf("%d",&m);
        for(i=0;i<m;++i)
            scanf("%d",&num[i]);

        sort(num,num+m);

        if(m%2==0)
        mid_val=num[m/2-1];
        else
        mid_val=num[m/2];

        for(i=0;i<m;++i)
        {
            t=mid_val-num[i];
            if(t<0)
            dist+=-t;
            else
            dist+=t;
        }
        printf("%d\n",dist);
    }
    return 0;
}
