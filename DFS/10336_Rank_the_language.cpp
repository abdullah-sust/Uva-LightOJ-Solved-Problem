#include "bits/stdc++.h"
using namespace std;
char arr1[102][102];
int x[] = { -1, 0, 0, 1};
int y[] = { 0, -1,  1, 0};
void bfs(char arr1[][102],int i,int j,int m,int n,char z)
{
    int p,u,v;
    if(i<m&&j<n&&i>-1&&j>-1)
    {
        if(arr1[i][j]==z)
        {
            arr1[i][j]='0';
            for(p = 0; p < 4; ++p)
            {
                u = i + x[p];
                v = j + y[p];
                bfs(arr1, u, v, m, n,z);
            }
        }
    }
    return;
}

int main ()
{
    int m,n,i,j,temp,cas,k;
    int language[26],ch[26];
    char z;
    scanf("%d",&cas);
    for(k=1;k<=cas;++k)
    {

    scanf("%d %d%c",&m,&n,&z);
        if(m==0)
            break;
        for(i=0; i<m; i++)
            gets(arr1[i]);

        for(i=0;i<26;++i)
        ch[i]=i+97;
        for(i=0;i<26;++i)
        language[i]=0;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
            {
                if(arr1[i][j]=='a')
                {
                    z=arr1[i][j];
                    language[0]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='b')
                {
                    z=arr1[i][j];
                    language[1]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='c')
                {
                    z=arr1[i][j];
                    language[2]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='d')
                {
                    z=arr1[i][j];
                    language[3]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='e')
                {
                    z=arr1[i][j];
                    language[4]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='f')
                {
                    z=arr1[i][j];
                    language[5]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='g')
                {
                    z=arr1[i][j];
                    language[6]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='h')
                {
                    z=arr1[i][j];
                    language[7]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='i')
                {
                    z=arr1[i][j];
                    language[8]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='j')
                {
                    z=arr1[i][j];
                    language[9]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='k')
                {
                    z=arr1[i][j];
                    language[10]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='l')
                {
                    z=arr1[i][j];
                    language[11]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='m')
                {
                    z=arr1[i][j];
                    language[12]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='n')
                {
                    z=arr1[i][j];
                    language[13]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='o')
                {
                    z=arr1[i][j];
                    language[14]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='p')
                {
                    z=arr1[i][j];
                    language[15]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='q')
                {
                    z=arr1[i][j];
                    language[16]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='r')
                {
                    z=arr1[i][j];
                    language[17]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='s')
                {
                    z=arr1[i][j];
                    language[18]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='t')
                {
                    z=arr1[i][j];
                    language[19]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='u')
                {
                    z=arr1[i][j];
                    language[20]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='v')
                {
                    z=arr1[i][j];
                    language[21]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='w')
                {
                    z=arr1[i][j];
                    language[22]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='x')
                {
                    z=arr1[i][j];
                    language[23]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='y')
                {
                    z=arr1[i][j];
                    language[24]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
                else if(arr1[i][j]=='z')
                {
                    z=arr1[i][j];
                    language[25]+=1;
                    bfs(arr1,i,j,m,n,z);
                }
            }
            for(i=0;i<25;++i)
            for(j=i+1;j<26;++j)
            {
                if(language[i]<language[j])
            {
                temp=language[i];
                language[i]=language[j];
                language[j]=temp;
                z=ch[i];
                ch[i]=ch[j];
                ch[j]=z;
            }
            else if(language[i]==language[j])
            {
                if(ch[i]>ch[j])
                {
                    z=ch[i];
                    ch[i]=ch[j];
                    ch[j]=z;
                }
            }

            }

            printf("World #%d\n",k);
            for(i=0;i<26;++i)
            if(language[i]!=0)
            printf("%c: %d\n",ch[i],language[i]);
    }
    return 0;
}

