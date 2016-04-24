#include<stdio.h>
int main()
{
    long long int a,b,c,d,n,i;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        a=0;
        b=1;
        for(i=0;i<n;++i)
        {
        c=a+b;
        a=b;
        b=c;
        }
        printf("%lld\n",c);
    }
    return 0;
}
