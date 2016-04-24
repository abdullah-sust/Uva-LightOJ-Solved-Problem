//10066 - The Twin Towers-LCS
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a,b,i,j,arr1[101],arr2[101],mat[101][101],cas=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0&&b==0)
        break;
        for(i=1;i<=a;++i)
        scanf("%d",&arr1[i]);
        for(i=1;i<=b;++i)
        scanf("%d",&arr2[i]);
        memset(mat,0,sizeof(mat));

        for(i=1;i<=a;++i)
        {
            for(j=1;j<=b;++j)
            {
                if(arr1[i]==arr2[j])
                mat[i][j]=mat[i-1][j-1]+1;
                else if(mat[i-1][j]>mat[i][j-1])
                mat[i][j]=mat[i-1][j];
                else
                mat[i][j]=mat[i][j-1];
            }
        }
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",++cas,mat[a][b]);
    }
    return 0;
}
