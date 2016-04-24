//uva 260_Gioco........
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
bool app[200][200];
char arr[200][200];
int p[]={-1,0,1,-1,0,1};
int q[]={-1,-1,0,0,1,1};
int result,num;
void dfs(int i, int j)
{
    int u,v,w;
    if(app[i][j]==1)
    {
        if(i==(num-1))
        {
            result=1;
            return;
        }
        app[i][j]=0;
        for(w=0;w<6;++w)
        {
            u=p[w]+i;
            v=q[w]+j;
            if(u>-1&&v>-1&&u<num&&v<num&&app[u][v]==1)
            dfs(u,v);
            if(result==1)
            return;
        }
    }
    return ;
}
int main()
{
    int a,i,j,cas=0;
    bool temp[200][200];
    while(scanf("%d",&num)==1)
    {
        if(num==0)
        break;
        memset(temp,0,sizeof(temp));
        for(i=0;i<num;++i)
        {
            scanf("%s",arr[i]);
            for(j=0;j<num;++j)
            if(arr[i][j]=='b')
            temp[i][j]=1;
        }
        for(a=0;a<num;++a)
        {
            result=0;
            for(i=0;i<num;++i)
            for(j=0;j<num;++j)
            app[i][j]=temp[i][j];
            if(arr[0][a]=='b')
            dfs(0,a);
            if(result==1)
            break;
        }
        if(result==1)
        printf("%d B\n",++cas);
        else
        printf("%d W\n",++cas);
    }
    return 0;
}
