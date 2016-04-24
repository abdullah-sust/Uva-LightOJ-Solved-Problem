#include "bits/stdc++.h"
using namespace std;

int x[] = {-1,-1,-1,0,1,1,1,0};
int y[] = {-1,0,1,1,1,0,-1,-1};

char  arr[25][25];
int b,t,a;
void  dfs(int i, int j)
{
    int u,p,v;
    if(i>-1&&j>-1&&i<b&&j<a&&(arr[i][j]=='1'))
    {
        ++t;
        arr[i][j]='0';
        for(p=0;p<8;++p)
        {
            u=i+x[p];
            v=j+y[p];
            if(u>-1&&v>-1&&u<b&&v<a&&(arr[u][v]=='1'))
            dfs(u,v);
        }
    }
    return ;
}
int main()
{
    int cas,i,j,grid,k;
    scanf("%d",&cas);
    getchar();
    getchar();
    for(k=1;k<cas;++k)
    {
        for(b=0;;++b)
        {
            gets(arr[b]);
            grid=strlen(arr[b]);
            if(grid==0)
            break;
        }
        a=strlen(arr[0]);
        grid=0;
        for(i=0;i<b;++i)
        {
            for(j=0;j<a;++j)
            {
                if(arr[i][j]=='1')
                {
                    t=0;
                    dfs(i,j);
                    if(grid<=t)
                    grid=t;
                }
            }
        }
        printf("%d\n\n",grid);
    }
    if(k==cas)
    {
        b=0;

        while(gets(arr[b++]))
                ;

        a=strlen(arr[0]);
        grid=0;
        for(i=0;i<b;++i)
        {
            for(j=0;j<a;++j)
            {
                if(arr[i][j]=='1')
                {
                    t=0;
                    dfs(i,j);
                    if(grid<t)
                    grid=t;
                }
            }
        }

        printf("%d\n",grid);

    }

    return 0;
}
