#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a , b, c, u, w, v;
    while(scanf("%lf",&u)==1)
    {
        scanf("%lf",&v);
        scanf("%lf",&w);
        if(u<=0||v<=0||w<=0)
        {
            printf("-1.000\n");
            continue;
        }
        a=2*(u*u*v*v+v*v*w*w+w*w*u*u);
        b=u*u*u*u+v*v*v*v+w*w*w*w;
        if((a-b)<=0)
        printf("-1.000\n");
        else
        {
            c=pow(a-b,0.50);
            printf("%0.3lf\n",c/3);
        }
    }
    return 0;
}
