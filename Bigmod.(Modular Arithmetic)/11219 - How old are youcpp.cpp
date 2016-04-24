#include<cstring>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    long long int a,d1,m1,y1,d2,m2,y2,y,z,p,cas,i,d;
    char c[12],f;
    scanf("%lld",&cas);
    getchar();

    for(i=0;i<cas;++i)
    {
        getchar();
        scanf("%s",c);
        getchar();
        sscanf(c,"%lld%c%lld%c%lld",&d1,&f,&m1,&f,&y1);
        d1=d1+m1*30+30*12*y1;
        scanf("%s",c);
        getchar();
        sscanf(c,"%lld%c%lld%c%lld",&d2,&m2,&y2);
        d2=d2+m2*30+30*12*y2;
    }
    return 0;
}
