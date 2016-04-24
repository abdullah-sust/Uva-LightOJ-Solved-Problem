#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,n,d,r,mor[10000],eve[10000],len,bonus,i,extra;
    while(scanf("%d %d %d",&n,&d,&r)==3)
    {
        if(n==0&&d==0&&r==0)
        break;
        len=0;
        bonus=0;
        for(i=0;i<n;++i)
            scanf("%d",&mor[i]);
            sort(mor,mor+n);
        for(i=0;i<n;++i)
            scanf("%d",&eve[i]);
        sort(eve,eve+n);
        bonus=0;
        for(i=0;i<n;++i)
        if((mor[i]+eve[n-1-i])>d)
        bonus+=(mor[i]+eve[n-1-i])-d;
        printf("%d\n",bonus*r);
    }
    return 0;
}
