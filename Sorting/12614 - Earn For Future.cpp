#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int num[31],i,t,p=0,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;++i)
        scanf("%d",&num[i]);
        sort(num,num+n);
        printf("Case %d: %d\n",++p,num[n-1]);
    }
    return 0;
}
