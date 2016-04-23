#include<cstdio>
#include<cstring>
using namespace std;
char arr[400][100000],ch,sum[100000];
int main()
{
    int i,j,k,a,m,n,hater,num[10];
    strcpy(arr[0],"1");
    strcpy(arr[1],"1");
    for(i=2;i<=400;++i)
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
        if(n==0)
        break;
        printf("%d! --\n",n);
        j=strlen(arr[n]);
        memset(num,0,sizeof(num));
        for(i=0;i<j;++i)
        {
            if(arr[n][i]=='0')
            ;
            else
            while(i<j)
            {
                if(arr[n][i]=='0')
                ++num[0];
                else if(arr[n][i]=='1')
                ++num[1];
                else if(arr[n][i]=='2')
                ++num[2];
                else if(arr[n][i]=='3')
                ++num[3];
                else if(arr[n][i]=='4')
                ++num[4];
                else if(arr[n][i]=='5')
                ++num[5];
                else if(arr[n][i]=='6')
                ++num[6];
                else if(arr[n][i]=='7')
                ++num[7];
                else if(arr[n][i]=='8')
                ++num[8];
                else if(arr[n][i]=='9')
                ++num[9];
                ++i;
            }
        }
        printf("   (0)%5d",num[0]);
        printf("    (1)%5d",num[1]);
        printf("    (2)%5d",num[2]);
        printf("    (3)%5d",num[3]);
        printf("    (4)%5d\n",num[4]);
        printf("   (5)%5d",num[5]);
        printf("    (6)%5d",num[6]);
        printf("    (7)%5d",num[7]);
        printf("    (8)%5d",num[8]);
        printf("    (9)%5d\n",num[9]);
    }
    return 0;
}
