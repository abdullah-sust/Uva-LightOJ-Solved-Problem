//10405 - Longest Common Subsequence
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int mat[1001][1001];
int main()
{
    int a,b,i,j;
    char str1[1001],str2[1001];
    while(gets(str1))
    {

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
        printf("%d",mat[a][b]);
        printf("\n");
    }
    return 0;
}
