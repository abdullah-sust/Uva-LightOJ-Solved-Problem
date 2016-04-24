//uva_10525
#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
#define SZ 50
#define INF 100000000
int node,edge;
int dist[SZ][SZ],tim[SZ][SZ];
void floyd_w_tim()
{
    int i,j,k;
    for(k=1;k<=node;++k)
    {
        for(i=1;i<=node;++i)
        {
            for(j=1;j<=node;++j)
            {
                int z=tim[i][k]+tim[k][j];
                if(z<tim[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    tim[i][j]=z;
                }
                else if(tim[i][j]==z &&(dist[i][j]>(dist[i][k]+dist[k][j])))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    return;
}
void initialize_tim ()
{
    int i,j,k;
    for(i=1;i<=node;++i)
    {
        for(j=1;j<=node;++j)
        {
            tim[i][j]=INF;
        }
        tim[i][i]=0;
    }
    return ;
}

void initialize_dis ()
{
    int i,j,k;
    for(i=1;i<=node;++i)
    {
        for(j=1;j<=node;++j)
        {
            dist[i][j]=INF;
        }
        dist[i][i]=0;
    }
    return ;
}

int main()
{

    int a,b,c,d,i,j,k,n,t,s;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&node,&edge);
        initialize_tim();
        initialize_dis();
        for(i=0;i!=edge;++i)
        {
            scanf("%d %d %d %d",&a,&b,&d,&c);
            if(d<tim[a][b])
            {
                tim[a][b]=tim[b][a]=d;
                dist[a][b]=dist[b][a]=c;
            }
            else if(d==tim[a][b]&&(dist[a][b]>c))
            {
                dist[a][b]=dist[b][a]=c;
                tim[a][b]=tim[b][a]=d;
            }

        }
        floyd_w_tim();

        scanf("%d",&n);

        for(i=0;i!=n;++i)
        {
            scanf("%d %d",&a,&b);
            if(dist[a][b]==INF)
            printf("No Path.\n");
            else
            printf("Distance and time to reach destination is %d & %d.\n",dist[a][b],tim[a][b]);
        }

        if(t)
        printf("\n");
    }
    return 0;

}
