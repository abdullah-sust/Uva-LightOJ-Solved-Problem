#include<stdio.h>
#include<stdlib.h>
long long int func(const void *a,const void *b)
{
    return (*(long long int *)a-*(long long int *)b);
}

int main()
{
    long long int a,b[3],c,d,n,i;
    scanf("%lld",&n);
    for(i=0;i<n;++i)
    {
        for(a=0;a<3;++a)
        scanf("%lld",&b[a]);
        qsort(b,3,sizeof(long long int),func);
        if(b[0]+b[1]<=b[2])
        printf("Case %lld: Invalid\n",i+1);
        else
        {
            if(b[0]==b[1]&&b[1]==b[2])
            printf("Case %lld: Equilateral\n",i+1);
            else if(b[0]==b[1]||b[1]==b[2]||b[2]==b[0])
            printf("Case %lld: Isosceles\n",i+1);
            else
            printf("Case %lld: Scalene\n",i+1);
        }
    }
    return 0;

}
