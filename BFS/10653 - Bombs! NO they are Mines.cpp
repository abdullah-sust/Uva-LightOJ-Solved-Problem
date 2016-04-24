#include<cstdio>
#include<cstring>
#include<queue>
#define SZ 1005
using namespace std;
queue <int> Q;
int dis[SZ][SZ],row,col;
int p[]={-1,0,1,0};
int q[]={0,1,0,-1};
bool vis[SZ][SZ];
int bfs(int begi,int begj,int endi,int endj)
{
    int nx,ny,u,v,r;
    while(!Q.empty())
    Q.pop();

    Q.push(begi);
    Q.push(begj);

    while(!Q.empty())
    {
        nx=Q.front();
        Q.pop();
        ny=Q.front();
        Q.pop();
        for(r=0;r<4;++r)
        {
            u=p[r]+nx;
            v=q[r]+ny;
            if(nx==endi&&ny==endj)
            return dis[nx][ny];
            if(u<row&&v<col&&u>-1&&v>-1&&vis[u][v]==0)
            {
                Q.push(u);
                Q.push(v);
                dis[u][v]=dis[nx][ny]+1;
                vis[u][v]=1;
            }
        }
    }
    return dis[endi][endj];
}
int main()
{
    int i,j,m,x,y,n,num,ans,k;
        while(scanf("%d %d",&row,&col)==2)
    {
        if((row==0)&&col==0)
        break;
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        scanf("%d",&num);
        for(i=0;i<num;++i)
        {
            scanf("%d",&m);
            scanf("%d",&n);
            for(j=0;j<n;++j)
            {
                scanf("%d",&k);
                vis[m][k]=1;
            }
        }
            scanf("%d",&m);
            scanf("%d",&n);
            scanf("%d",&x);
            scanf("%d",&y);
        ans=bfs(m,n,x,y);
        printf("%d\n",ans);
    }
    return 0;
}
