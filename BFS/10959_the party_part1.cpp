#include<cstdio>
#include<cstring>
#include<cmath>
#include<queue>
using namespace std;
queue<int>Q;
int arr[1000][1000],dis[1000],vis[1000];
void bfs(int start,int end)
{
    int i,u;
    while(!Q.empty())
    Q.pop();
    Q.push(start);
    vis[start]=1;
    dis[start]=0;
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        for(i=1;i<=end;++i)
        if(vis[i]==0&&arr[u][i]==1)
        {
            vis[i]=1;
            dis[i]=dis[u]+1;
            Q.push(i);
        }
    }
    return ;
}
int main()
{
    int cas,p,d,i,m,n,x,y;
    scanf("%d",&cas);
//    getchar();
//    getchar();
    while(cas--)
    {
        memset(arr,0,sizeof(arr));
        memset(dis,-1,sizeof(dis));
        memset(vis,0,sizeof(vis));
        scanf("%d %d",&p,&d);
        for(i=0;i<d;++i)
        {
            scanf("%d %d",&m,&n);
            arr[m][n]=arr[n][m]=1;
        }
        bfs(0,p-1);
            for(i=1;i<p;++i)
            printf("%d\n",dis[i]);
    if(cas!=0)
    printf("\n");
    }
    return 0;
}
