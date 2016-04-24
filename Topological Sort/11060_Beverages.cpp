#include<cstdio>
#include<vector>
#include<queue>
#include<iostream>
#include<cstring>
#include <map>
using namespace std;
#define s scanf
#define p printf
vector <int > vec[300];
map<string , int > mm;
map <int ,string > nn;
int indegree[300];
int ans[300];
int main()
{
    string a,b;
    int i,j,k,m,n,cnt=0,x;
    while (s("%d",&n)==1)
    {
        memset(ans,0,sizeof(ans));
        memset(indegree,0,sizeof(indegree));
        mm.clear();
        nn.clear();
        for(i=1;i<=n;++i)
        {
            cin>>a;
            mm[a]=i;
            nn[i]=a;
        }
        s("%d",&m);
        for(i=0;i<m;++i)
        {
            cin>>a>>b;
            vec[mm[a]].push_back(mm[b]);
            ++indegree[mm[b]];
        }
        for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
        if(indegree[j]==0)
        {
            ans[i]=j;
            --indegree[j];
            x=vec[j].size();
            for(k=0;k<x;++k)
            --indegree[vec[j][k]];
            vec[j].clear();
            break;
        }
        printf("Case #%d: Dilbert should drink beverages in this order:", ++cnt);
        for(j = 1; j <= n; ++j)
        cout<<" "<<nn[ans[j]];
        p(".\n\n");
    }
    return 0;
}
