#include<stdio.h>
int main()
{
    int n,i,j,g,x,y,r;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        g=0;
        for(i=1;i<n;++i)
        for(j=i+1;j<=n;++j)
        {
            x=i;
            y=j;
            while(y!=0)
            {
                r=x%y;
                x=y;
                y=r;
            }
            g+=x;
        }
        printf("%d\n",g);
    }
    return 0;
}
