#include<stdio.h>
#include<math.h>
#define PI 2*acos(0)
int main ()
{
    double i,k,x1,x2,x3,y1,y2,y3,g,f,c,r,cir;
    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        g=2*(((x2*x2+y2*y2)-(x1*x1+y1*y1))*(y2-y3)-(y1-y2)*((x3*x3+y3*y3)-(x2*x2+y2*y2)));
        f=2*((x1-x2)*(x3*x3+y3*y3-x2*x2-y2*y2)-(x2-x3)*(x2*x2+y2*y2-x1*x1-y1*y1));
        c=4*(x1*(y2*(-x3*x3-y3*y3)+y3*(x2*x2+y2*y2))+y1*(x3*(-x2*x2-y2*y2)+x2*(x3*x3+y3*y3))+(-x1*x1-y1*y1)*(x2*y3-x3*y2));
        k=4*((x1-x2)*(y2-y3)-(x2-x3)*(y1-y2));
        g/=k;
        f/=k;
        c/=k;
        i=g*g+f*f-c;
        r=sqrt(i);
        cir=2*PI*r;
        printf("%.2lf\n",cir);
    }
    return 0;
}
