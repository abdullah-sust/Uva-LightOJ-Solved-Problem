//10803-uva
#include<cstdio>
#include<cmath>
using namespace std;
#define INF 100000000
double dist[105][105];
int a;
void initialize(void)
{
    for(int i=1;i<=a;++i)
    {
        for(int j=1;j<=a;++j)
        dist[i][j]=INF;
        dist[i][i]=0;
    }
    return;
}
void floyd(void)
{
    int i,j,k;
    for(k=1;k<=a;++k)
    for(i=1;i<=a;++i)
    for(j=1;j<=a;++j)
    {
        if(dist[i][j]>(dist[i][k]+dist[k][j]))
        dist[i][j]=(dist[i][k]+dist[k][j]);
    }
    return;
}
int main()
{
    int t,i,j,k,cas=0;;
    double ans,cord[105][2],d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        initialize();
        for(i=1;i<=a;++i)
        {
            scanf("%lf %lf",&cord[i][0],&cord[i][1]);

        }
        for(i=1;i<=a;++i)
        for(j=1;j<=a;++j)
        {
            d=sqrt(abs((cord[i][0]-cord[j][0])*(cord[i][0]-cord[j][0])+(cord[i][1]-cord[j][1])*(cord[i][1]-cord[j][1])));
            if(d<=10.0000)
            {
                dist[i][j]=d;
                //printf("%lf ",d);
            }
        }
        floyd();
        ans=-1;
        for(i=1;i<=a;++i)
        for(j=1;j<=a;++j)
        if(dist[i][j]>ans)
        ans=dist[i][j];
        if(ans==INF)
        {
            printf("Case #%d:%c",++cas,10);
            printf("Send Kurdy%c%c",10,10);
        }
        else
        {
            printf("Case #%d:%c",++cas,10);
            printf("%.4lf%c%c",ans,10,10);
        }
    }
    return 0;
}
