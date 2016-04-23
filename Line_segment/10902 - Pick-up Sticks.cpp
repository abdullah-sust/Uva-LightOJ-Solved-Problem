//10902 - Pick-up Sticks
#include<cstdio>
#include<iostream>
using namespace std;
typedef struct
{
    double x,y;
}point;
typedef struct
{
    point p1,p2;
}line;
line li[100001];
int arr[1001];
double max_(double a,double b)
{
    if(a>=b)
    return a;
    return b;
}
double min_(double a,double b)
{
    if(a<=b)
    return a;
    return b;
}
double direc(point pi,point pj, point pk)
{
    return (((pk.x-pi.x)*(pj.y-pi.y))-((pj.x-pi.x)*(pk.y-pi.y)));
}
bool on_seg(point pi,point pj, point pk)
{
    if(min_(pi.x,pj.x)<=pk.x && min_(pi.y,pj.y)<=pk.y && max_(pi.x,pj.x)>=pk.x && max_(pi.y,pj.y)>=pk.y)
    return true;
    return false;
}
bool line_seg(point p1,point p2,point p3,point p4)
{
    int d1,d2,d3,d4;
    d1=direc(p1,p2,p3);
    d2=direc(p1,p2,p4);
    d3=direc(p3,p4,p1);
    d4=direc(p3,p4,p2);
    if((((d1>0)&&(d2<0))||((d1<0)&&(d2>0))) &&
       (((d3>0)&&(d4<0))||((d3<0)&&(d4>0))))
    return true;
    else if(d1==0 && on_seg(p1,p2,p3))
    return true;
    else if(d2==0 && on_seg(p1,p2,p4))
    return true;
    else if(d3==0 && on_seg(p3,p4,p1))
    return true;
    else if(d4==0 && on_seg(p3,p4,p2))
    return true;
    else
    return false;
}
int main()
{
    int  n,i,j,ans,t,m;

    while(scanf("%d",&n)==1)
    {
        if (n==0)
        break;

        for(i=1;i<=n;++i)
        scanf("%lf %lf %lf %lf",&li[i].p1.x,&li[i].p1.y,&li[i].p2.x,&li[i].p2.y);
    ans=0;
    for(i=1;i<=n;++i)
    {
        for(j=i+1,m=0;j<=n;++j)
        if(i!=j && line_seg(li[i].p1,li[i].p2,li[j].p1,li[j].p2))
        {
            m=1;
            break;
        }
        if(m==0)
        {
            arr[++ans]=i;
        }
    }
    printf("Top sticks:");
    for(i=1;i<ans;++i)
    printf(" %d,",arr[i]);
    printf(" %d.\n",arr[ans]);
    }
    return 0;
}
/*
Input:
5
1 1 4 2
2 3 3 1
1 -2.0 8 4
1 4 8 2
3 3 6 -2.0
3
0 0 1 1
1 0 2 1
2 0 3 1
0
Output:
Top sticks: 2, 4, 5.
Top sticks: 1, 2, 3.
*/
