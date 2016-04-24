#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    freopen("in.txt","w",stdout);
    int m,n,i,j,k,x,y,vis,digit[10],xx=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        vis=0;
        if(xx!=0)
        printf("\n");
        xx=1;

for(i=01234;i<49383;++i)
        {
            x=i;
            m=n*i;
            y=m;
            k=0;
            memset(digit,0,sizeof(digit));
            if(m<=98765)
            {
                //sum1=0;
                while(x>0)
                {
                    ++k;
                    digit[(x%10)]=1;
                    x/=10;
                }
                if(k==4)
                digit[0]=1;

                //sum2=0;
                while(y>0)
                {
                    digit[(y%10)]=1;
                    y/=10;
                }
                //printf("%d\n",sum2);
                for(j=0;j<10;++j)
                if(digit[j]==0)
                break;

                if(j==10)
                {
                    if(i<10000)
                    printf("%d / 0%d = %d\n",m,i,n);
                    else
                    printf("%d / %d = %d\n",m,i,n);
                    vis=1;
                }
            }
        }
        if(vis!=1)
        printf("There are no solutions for %d.\n",n);
    }
    return 0;
}
