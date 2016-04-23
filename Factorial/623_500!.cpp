#include<cstdio>
#include<cstring>
using namespace std;
char arr[10001][100000],ch,sum[100000];
int main()
{
    int i,j,k,a,m,n,hater;
    strcpy(arr[0],"1");
    strcpy(arr[1],"1");
    for(i=2;i<=10000;++i)
    {
        n=i;
        hater=0;
        a=strlen(arr[i-1]);
        for(j=0,a=a-1;a>-1;--a,++j)
        {
            m=(arr[i-1][a]-48)*n+hater;
            sum[j]=(m%10)+48;
            hater=m/10;
        }
        while(hater>9)
        {
            sum[j++]=(hater%10)+48;
            hater/=10;
        }
        sum[j++]=hater+48;
        sum[j]='\0';
        n=strlen(sum);
        for(j=0,k=n-1;j<n;++j,--k)
        arr[i][j]=sum[k];
        arr[i][j]='\0';
    }
    while(scanf("%d",&n)==1)
    {
        printf("%d!\n",n);
        j=strlen(arr[n]);
        for(i=0;i<j;++i)
        {
            if(arr[n][i]=='0')
            ;
            else
            while(i<j)
            printf("%c",arr[n][i++]);
        }
        printf("\n");
    }
    return 0;
}
