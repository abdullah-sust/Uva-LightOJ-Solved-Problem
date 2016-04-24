//10192 - Vacation
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int mat[101][101];
int main()
{
    int a,b,i,j,cas=0;
    char str1[101],str2[101];
    while(gets(str1))
    {
        if(strcmp(str1,"#")==0)
        break;
        memset(mat,0,sizeof(mat));
        gets(str2);
        a=strlen(str1);
        b=strlen(str2);

        for(i=1;i<=a;++i)
        {
            for(j=1;j<=b;++j)
            {
                if(str1[i-1]==str2[j-1])
                {
                    mat[i][j]=mat[i-1][j-1]+1;
                }
                else if(mat[i-1][j]>mat[i][j-1])
                {
                    mat[i][j]=mat[i-1][j];
                }
                else
                {
                    mat[i][j]=mat[i][j-1];
                }
            }
        }
        printf("Case #%d: you can visit at most %d cities.",++cas,mat[a][b]);
        printf("\n");
    }
    return 0;
}
