//light oj 1153- max flow
//uva- 820
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#include<math.h>
using namespace std;
queue <int> Q;
int arr[101][101];
int cost[101][101];
int par[101],vis[101];
int n;

int bfs(int start, int end)
{
    //printf("Awal\n");
    int u;
    while(!Q.empty())
    Q.pop();
    Q.push(start);
    while(!Q.empty())
    {
        u=Q.front();
        Q.pop();
        vis[u]=1;
        for(int i=1;i<=n;++i)
        if(arr[u][i]==1&&vis[i]==0&&cost[u][i]>0)
        {
            vis[i]=1;
            par[i]=u;
            Q.push(i);
            if(i==end)
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t,cas,i,j,w,a,b,c,s,e;
    int min_;

    cas=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        min_=100000000;
        memset(cost,0,sizeof(cost));
        memset(arr,0,sizeof(arr));
        memset(vis,0,sizeof(vis));
        memset(par,-1,sizeof(par));
        //scanf("%d",&n);
        scanf("%d %d %d",&s,&e,&c);
        while(c--)
        {
            scanf("%d %d %d",&a,&b,&w);
            arr[a][b]=1;
            arr[b][a]=1;
            cost[a][b]+=w;
            cost[b][a]+=w;
        }
        long long int ans=0;
        while(bfs(s,e))
        {
            min_=100000000;
            int x=e;
            while(par[x]>-1)
            {
                min_=min(min_,cost[par[x]][x]);
                x=par[x];
            }
            x=e;
            while(par[x]>-1)
            {
                cost[par[x]][x]-=min_;
                cost[x][par[x]]+=min_;
                x=par[x];
            }
            memset(vis,0,sizeof(vis));
            memset(par,-1,sizeof(par));
            ans+=min_;
        }
        printf("Network %d\nThe bandwidth is %lld.\n\n",++cas,ans);
    }
     return 0;
}
