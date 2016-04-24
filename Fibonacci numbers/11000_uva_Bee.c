#include<stdio.h>
int main()
{
    int n,i;
    unsigned  male,female,total;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        break;
        else if(n==0)
        printf("0 1\n");
        else
        {
        male=1;
        female=1;
        total=2;
        for(i=1;i<n;++i)
        {
            female=male+1;
            male=total;
            total=male+female;
        }
        printf("%u %u\n",male,total);
        }
    }
    return 0;
}
