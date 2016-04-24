#include<stdio.h>
#define PI acos(-1)
int main()
{
    int a,b;
    double l,cir,rec;
    scanf("%d",&a);
    for(b=0;b<a;++b)
    {
    scanf("%lf",&l);
    cir=PI*(l/5)*(l/5);
    rec=(l/10)*6;
    rec=rec*l;
    printf("%.2lf %.2lf\n",cir,rec-cir);
    }
    return 0;
}
