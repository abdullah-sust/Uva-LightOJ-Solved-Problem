#include<stdio.h>
using namespace std;
int main()
{
    int r,l,w,t,cas,l1,l2,i;
    scanf("%d",&cas);
    for(i=1;i<=cas;++i)
    {
        scanf("%d",&r);
        l=5*r;
        w=(l*60)/100;
        w/=2;
        l1=(l*45)/100;
        l2=(l*55)/100;
        printf("Case %d:\n",i);
        printf("-%d %d\n",l1,w);
        printf("%d %d\n",l2,w);
        printf("%d -%d\n",l2,w);
        printf("-%d -%d\n",l1,w);
    }
    return 0;
}
