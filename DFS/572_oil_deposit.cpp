#include "bits/stdc++.h"
using namespace std;

int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};
void bfs(int arr[][102],int i,int j,int m,int n)
{
    int p, u, v;
    if(i<m&&j<n&&i>-1&&j>-1)
    {
        if(arr[i][j]==1)
        {
            arr[i][j]=0;
            for(p = 0; p < 8; ++p)
            {
                u = i + x[p];
                v = j + y[p];
                bfs(arr, u, v, m, n);
            }
        }
    }
    return;
}
int arr[102][102];
int main ()
{
    int m,n,i,j,depo;
    char z,arr1[102];
    while(scanf("%d %d%c",&m,&n,&z)==3)
    {
        if(m==0)
            break;
        depo=0;
        memset(arr,0,sizeof(arr));
        for(i=0; i<m; i++)
        {
            gets(arr1);
            for(j=0; j<n; j++)
            {
                if(arr1[j]=='@')
                    arr[i][j]=1;
            }
        }
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(arr[i][j]==1)
                {
                    depo+=1;
                    bfs(arr,i,j,m,n);
                }
            }
        cout<<depo<<endl;
    }
    return 0;
}

