//light-oj 1110
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,a,b,i,j,k,c[101][101],mat[101][101],cas;
    char str1[101],str2[101];
    scanf("%d",&n);
    for(int cas=1;cas<=n;++cas)
    {
        scanf("%s %s",&str1,&str2);
        memset(mat,0,sizeof(mat));
        a=strlen(str1);
        b=strlen(str2);
        for(i=1;i<=a;++i)
        {
            for(j=1;j<=b;++j)
            {
                if(str1[i-1]==str2[j-1])
                {
                    mat[i][j]=mat[i-1][j-1]+1;
                    c[i][j]='d';
                }
                else if(mat[i-1][j]>mat[i][j-1])
                {
                    mat[i][j]=mat[i-1][j];
                    c[i][j]='u';
                }
                else
                {
                    mat[i][j]=mat[i][j-1];
                    c[i][j]='l';
                }
            }
        }

        printf("Case %d: %d",cas,mat[a][b]);
        printf("\n");
    }
    return 0;
}
