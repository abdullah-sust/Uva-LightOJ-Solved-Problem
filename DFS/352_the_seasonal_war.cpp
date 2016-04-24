#include "bits/stdc++.h"
using namespace std;
char arr[25][25];
int n;
int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs (int i, int j)
{
    int p,u,v;
    if(i>-1&&j>-1&&i<n&&j<n)
    if(arr[i][j]=='1')
    {
        arr[i][j]='0';
        for(p=0;p<8;++p)
        {
            u=i+x[p];
            v=j+y[p];
            dfs(u,v);
        }
    }
    return ;
}
int main()
{
    char z;
    int i,j,eagle,cas=0;
    while(scanf("%d%c",&n,&z)==2)
    {
        for(i=0;i<n;++i)
        gets(arr[i]);
        eagle=0;
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
            {
                if(arr[i][j]=='1')
                {
                    eagle+=1;
                    dfs(i,j);
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++cas,eagle);
    }
    return 0;

}
