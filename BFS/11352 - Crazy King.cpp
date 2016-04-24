#include<cstdio>
#include<cstring>
#include<queue>
#define SZ 1000
using namespace std;
queue <int>Q;
int a[]={-1,-1,-1,0,1,1,1,0};
int b[]={-1,0,1,1,1,0,-1,-1};
int p[]={-2,-2,-1,1,2,2,1,-1};
int q[]={-1,1,2,2,1,-1,-2,-2};
bool vis[SZ][SZ];
int dis[SZ][SZ],m,n;
int bfs(int bi,int bj,int eni,int enj)
{
    int u,v,r,nx,ny;
    while(!(Q.empty()))
    Q.pop();

    Q.push(bi);
    Q.push(bj);

    while(!(Q.empty()))
    {
        nx=Q.front();
        Q.pop();
        ny=Q.front();
        Q.pop();

        for(r=0;r<8;++r)
        {
            u=nx+a[r];
            v=ny+b[r];
            if(nx==eni&&ny==enj)
            return dis[nx][ny];
            if(u>-1&&v>-1&&u<m&&v<n&&vis[u][v]==0)
            {
                Q.push(u);
                Q.push(v);
                dis[u][v]=dis[nx][ny]+1;
                vis[u][v]=1;
            }

        }
    }
    return dis[eni][enj];
}
int main()
{
    int cas,i,j,r,w,x,y,z,ans;
    char s[1000];
    scanf("%d",&cas);
    //getchar();
    while(cas--)
    {
        memset(vis,0,sizeof(vis));
        memset(dis,0,sizeof(dis));
        scanf("%d %d",&m,&n);

        //getchar();
        //getchar();
        for(i=0;i<m;++i)
        {
            scanf("%s",s);

            for(j=0;j<n;++j)
            {
                if(s[j]=='Z')
                {
                    vis[i][j]=1;
                    for(r=0;r<8;++r)
                    {
                        if((i+p[r])>-1&&(i+p[r])<m&&(j+q[r])>-1&&(j+q[r])<n)
                        vis[i+p[r]][j+q[r]]=1;
                    }
                }
                else if(s[j]=='A')
                {
                    w=i;
                    x=j;
                }
                else if(s[j]=='B')
                {
                    y=i;
                    z=j;
                }
            }
        }
        vis[w][x]=vis[y][z]=0;
        ans=bfs(w,x,y,z);
        if(ans==0)
        printf("King Peter, you can't go now!\n");
        else
        printf("Minimal possible length of a trip is %d\n",ans);
    }
    return 0;
}
