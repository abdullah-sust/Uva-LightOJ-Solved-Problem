#include<cstdio>
#include<stdlib.h>
#include<iostream>
#include<cmath>
using namespace std;
#define INF (1<<28)
#define SZ 105
int e[SZ][SZ];
void initialize(int n)
{
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        {
            e[i][j]=(i==j)?0:INF;
        }
    return ;
}
void floyd(int n)
{
    int i,j,k;
    for(k=1;k<=n;++k)
    {
        for(i=1;i<=n;++i)
        {
            for(j=1;j<=n;++j)
            {
                e[i][j]=min(e[i][j],e[i][k]+e[k][j]);
            }
        }
    }
    return;
}
int main()
{
    int t,n,p,cas=0;
    int u,v,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;

        initialize(n);
        while(p--)
        {
            cin>>u>>v>>w;
            //e[u][v]=e[v][u]=w;
            e[u][v]=min(e[u][v],w);
            e[v][u]=min(e[v][u],w);
        }
        floyd(n);

        if(e[1][n]>=INF)
        cout<<"Case "<<++cas<<": Impossible"<<endl;
        else
        cout<<"Case "<<++cas<<": "<<e[1][n]<<endl;
    }
    return 0;
}
