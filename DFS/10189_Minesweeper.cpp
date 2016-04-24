#include "bits/stdc++.h"
using namespace std;
char arr[100][100];
int arr1[100][100];
int a,b;

int x[] = {-1, -1, -1,  0, 1, 1,1,0};
int y[] = {-1, 0, 1,1, 1, 0, -1,-1};

int main()
{
    int i,j,cas=0,p,u,v;
    while(scanf("%d %d",&a,&b)==2)
    {
        getchar();
        if(!a&&!b)
        break;

        for(i=0;i<a;++i)
        gets(arr[i]);

        for(i=0;i<a;++i)
        for(j=0;j<b;++j)
        {
            if(arr[i][j]=='*')
        arr1[i][j]=-1;
        else
        arr1[i][j]=0;
        }
        for(i=0;i<a;++i)
        for(j=0;j<b;++j)
        if(arr1[i][j]==-1)
        {
            for(p=0;p<8;++p)
            {
                u=i+x[p];
                v=j+y[p];
                if(u>-1&&v>-1&&u<a&&v<b)
                    if(arr1[u][v]!=-1)
                    ++arr1[u][v];
            }
        }
        if(cas!=0)
        printf("\n");
        printf("Field #%d:\n",++cas);

        for(i=0;i<a;++i)
        {
        for(j=0;j<b;++j)
        {
            if(arr1[i][j]==-1)
            printf("*");
            else
            printf("%d",arr1[i][j]);
        }
        printf("\n");

        }
    }
    return 0;
}
