#include<stdio.h>
#include<string.h>
using namespace std;
int r,c,s;
bool visit[100][100];
char letter[2500],sh,arr[50][50];
int num[2500];

int p[]={-1,0,1,0};
int q[]={0,1,0,-1};
int  dfs(int i,int j)
{
    int u,v,w;
       for(w=0;w<4;++w)
       {
           u=p[w]+i;
           v=q[w]+j;
           if((visit[u][v]==1)&&(u>-1&&v>-1&&u<r&&v<c)&&arr[u][v]==sh)
           {
               ++s;
               visit[u][v]=0;
               dfs(u,v);
           }
       }
       return s;
}
int main()
{
    int a,i,j,m,cas=0,temp;
    while(scanf("%d %d",&r,&c)==2)
    {
        if(r==0&&c==0)
        break;
        memset(visit,0,sizeof(visit));
        for(i=0;i<r;++i)
        {
            scanf("%s",arr[i]);
            for(j=0;j<c;++j)
            if(arr[i][j]!='.')
            visit[i][j]=1;
        }
        m=-1;
        for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        if(visit[i][j]==1)
        {
            ++m;
            s=1;
            letter[m]=sh=arr[i][j];
            visit[i][j]=0;
            num[m]=dfs(i,j);
        }
        for(i=0;i<m;++i)
        for(j=i+1;j<=m;++j)
        {
            if(num[i]<num[j])
            {
                sh=letter[i];
                letter[i]=letter[j];
                letter[j]=sh;
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
            else if((num[i]==num[j])&&(letter[i]>letter[j]))
            {
                sh=letter[i];
                letter[i]=letter[j];
                letter[j]=sh;
            }
        }
        printf("Problem %d:\n",++cas);
        for(i=0;i<=m;++i)
        printf("%c %d\n",letter[i],num[i]);
        //printf("------\n");

    }
    return 0;
}
