#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int a,p,x,y,b[100],g,cas,i,j,k,r,l,sum;
    char c,arr[1000],temp[10];
    scanf("%d",&cas);
    getchar();
    while(cas--)
    {
        gets(arr);
        l=strlen(arr);
        k=-1;
        for(i=0;i<l;++i)
        {
            j=0;
            while((arr[i]>='0')&&(arr[i]<='9')&&(i<l))
            {
                temp[j++]=arr[i];
                ++i;
            }

            temp[j]='\0';
            sum=0;
            for(j=0;j<strlen(temp);++j)
            sum=(sum*10)+(temp[j]-48);
            if(sum!=0)
            b[++k]=sum;
            if(arr[i]=='\0')
            break;
        }
        g=1;
        for(i=0;i<k;++i)
        for(j=i+1;j<=k;++j)
        {
            x=b[i];
            y=b[j];
            while(y!=0)
            {
                r=x%y;
                x=y;
                y=r;
            }
            if(x>g)
            g=x;
        }
        printf("%d\n",g);
    }

    return 0;
}
