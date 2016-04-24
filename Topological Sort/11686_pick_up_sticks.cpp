 #include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#define SZ 1000002
using namespace std;
vector <int> vec[SZ];
queue <int> Q;
int indegree[SZ];
int ans[SZ];
int main()
{
    int n,m,a,b,i,k;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0&&m==0)
        break;
        memset(indegree,0,sizeof(indegree));
        for(i=0;i<m;++i)
        {
            scanf("%d %d",&a,&b);
            ++indegree[b];
            vec[a].push_back(b);
        }
        while(!Q.empty())
        Q.pop();

        for(i=1;i<=n;++i)
        if(indegree[i]==0)
        Q.push(i);

        k=0;
        while(!Q.empty())
        {
            int u= Q.front();
            Q.pop();
            int v=vec[u].size();
            ans[++k]=u;
            for(i=0;i<v;++i)
            {
                if(--indegree[vec[u][i]]==0)
                Q.push(vec[u][i]);
            }

        }
        if(k!=n)
        printf("IMPOSSIBLE.\n");
        else
        {
            printf("%d",ans[1]);
            {
                for(i=2;i<=k;++i)
                printf(" %d",ans[i]);
            }
            printf("\n");

        }
    }
    return 0;
}
