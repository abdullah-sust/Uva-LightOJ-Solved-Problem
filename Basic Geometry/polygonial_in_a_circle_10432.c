#include<stdio.h>
#include<math.h>
#define PI 2*(acos(0))
int main()
{
    double b1,d,a,b,c;
    while(scanf("%lf%lf",&a,&b)==2)
    {
        c=180/(360/b);
        d=sin(PI/c)*.5*a*a*b;
        printf("%0.3lf\n",d);
    }
    return 0;
}
