#include "bits/stdc++.h"
using namespace std;
#define SZ 310

bool matrix[SZ][SZ];
bool vis[SZ];
int dist[SZ];
int parent[SZ];

queue <int> Q;

int n,m;

int BFS(int start, int end)
{
    memset(vis, 0, sizeof(vis));
    memset(parent,0,sizeof(parent));
    memset(dist, -1, sizeof(dist));
    while(!Q.empty())
        Q.pop();

    vis[start] = 1;
    dist[start] = 0;
    Q.push(start);
    parent[start]=start;

    int i, u;

    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();

        for(i=1;i<=n;i++)
        {
            if(matrix[u][i] == 1 && vis[i] == 0)
            {
                parent[i]=u;
                vis[i] = 1;
                dist[i] = dist[u] + 1;
                Q.push(i);
            }
        }
    }

    return dist[end];
}

int main()
{
    char arr[1000],temp[1000];
    int i, j, k,beg,End,sum,l,b[310];

    while(scanf("%d",&n) == 1)
    {
        getchar();

        memset(matrix, 0, sizeof(matrix));
        for(End=0;End<n;++End)
        {
            gets(arr);
        l=strlen(arr);
        k=-1;
        for(i=0;i<l;++i)
        {
            j=0;
            while((arr[i]>='0')&&(arr[i]<='9')&&(i<l))
            {
                temp[j++]=arr[i];
                ++i;
            }

            temp[j]='\0';
            sum=0;
            for(j=0;j<strlen(temp);++j)
            sum=(sum*10)+(temp[j]-48);
            if(sum!=0)
            b[++k]=sum;
            if(arr[i]=='\0')
            break;
        }
        i=b[0];
        for(l=1;l<=k;++l)
                matrix[i][b[l]]=1;
        }

        scanf("%d",&m);
        printf("-----\n");
        while(m--)
        {
            scanf("%d %d",&j,&k);
            beg=j;
            End=k;
            k= BFS(j,k);
            if(k== -1)
            printf("connection impossible\n");
            else
            {
                i=0;
                dist[i]=End;
                while(beg!=End)
                {
                    End=parent[End];
                    dist[++i]=End;
                }
                k=i;
                for(;i>-1;--i)
                {
                    if(i<k)
                    printf(" %d",dist[i]);
                    else
                    printf("%d",dist[i]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
