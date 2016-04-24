#include<stdio.h>
#include<string.h>
int main()
{
    long long int b,n,m,power,x;
    char binary[1000],bi[1000];
    int i,j,k,a;
    while(scanf("%lld %lld %lld",&b,&n,&m)==3)
    {
        i=0;
        while(n>1)
        {
            if(n%2==0)
            binary[i]='0';
            else
            binary[i]='1';
            n/=2;
            ++i;
        }
        if(n==1)
        {
            binary[i]='1';
            binary[i+1]='\0';
        }
        else
        binary[i]='\0';
        a=strlen(binary);
        x=1;
        power=b%m;
        for(i=0;i<a;++i)
        {
            if(binary[i]=='1')
            {
                x=(x*power)%m;
                power=(power*power)%m;
            }
            else
            power=(power*power)%m;
        }
        printf("%lld\n", x);
    }
    return 0;
}
