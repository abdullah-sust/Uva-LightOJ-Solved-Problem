#include "bits/stdc++.h"
using namespace std;
char arr1[102][102];
int x[] = {-1,-1,-1,0,1,1,1,0};
int y[] = {-1,0,1,1,1,0,-1,-1};
int t;
void bfs(char arr1[][102],int i,int j,int m,int n)
{
    int p,u,v;
    if(i<m&&j<n&&i>-1&&j>-1)
    {
        if(arr1[i][j]=='*')
        {
            ++t;
            arr1[i][j]='0';
            for(p = 0; p < 8; ++p)
            {
                u = i + x[p];
                v = j + y[p];
                bfs(arr1, u, v, m, n);
            }
        }
    }
    return;
}

int main ()
{
    int m,n,i,j,temp,cas,k;
    int counting;
    char z;
    while(1)
    {

    scanf("%d %d%c",&m,&n,&z);
        if(m==0)
            break;
        for(i=0; i<m; i++)
            gets(arr1[i]);

        counting=0;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(arr1[i][j]=='*')
                {
                    t=0;
                    bfs(arr1,i,j,m,n);
                    if(t>1)
                    ;
                    else
                    ++counting;
                }

            }
            printf("%d\n",counting);
    }
    return 0;
}

