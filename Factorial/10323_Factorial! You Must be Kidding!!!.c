#include<stdio.h>
int main()
{
    long long int a,b,i,p;
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
        {
            if(-a%2==0)
            printf("Underflow!\n");
            else
            printf("Overflow!\n");
        }
        else if(a>13)
        {
        printf("Overflow!\n");
        }
        else if(a<8&&a>=0)
        {
            printf("Underflow!\n");
        }
        else
        {
            if(a==8)
        printf("40320\n");
        else if(a==9)
        printf("362880\n");
        else if(a==10)
        printf("3628800\n");
        else if(a==11)
        printf("39916800\n");
        else if(a==12)
        printf("479001600\n");
        else if(a==13)
        printf("6227020800\n");
        }

    }
    return 0;
}
