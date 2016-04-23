#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
#define s scanf
#define p printf
using namespace std;
vector <int> vec[110];
queue  <int> q;
int ans[110];
int indegree[110];
int main()
{
    int i,j,m,n,a,b,k,u,x;
    while(s("%d %d",&n,&m)==2)
    {
        if(m==0&&n==0)
        break;
        //indegree array ke zero kore pai
        memset(indegree,0,sizeof(indegree));
        for(i=0;i<m;++i)
        {
            s("%d %d",&a,&b);
            vec[a].push_back(b);
            ++indegree[b];
        }
        //primary situation e jader indegree zero tader queue te push korlam.....
        for(i=1;i<=n;++i)
        if(indegree[i]==0)
        q.push(i);
        //at last each element of queue er shate jara connected tader indegree -1 korlam....
        //eder modde jader indegree zero hoi tader queue te push korlam....
        k=0;
        while(!q.empty())
        {
            u=q.front();
            q.pop();
            ans[++k]=u;
            x=vec[u].size();
            for(i=0;i<x;++i)
                if(--indegree[vec[u][i]]==0)
                q.push(vec[u][i]);
        }
        //vector  gula clear krlam...
        for(i=0;i<n;++i)
        vec[i].clear();
        vec[i].clear();
        printf("%d",ans[1]);
        for(i=2;i<=k;++i)
        printf(" %d",ans[i]);
        printf("\n",ans[i]);
    }
    return 0;
}
