#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
    return b;
    gcd(b,a%b);
}
int main()
{
    long long int a,b,i,j,t,num,z;
    char arr1[50],arr2[50];
    scanf("%lld",&num);
    getchar();
    for(z=1;z<=num;++z)
    {
        gets(arr1);
        gets(arr2);
        a=strlen(arr1);
        b=strlen(arr2);
        t=0;
        for(i=a-1,j=0;i>=0;--i,++j)
        t+=(arr1[i]-48)*((long long int)(pow(2.0,(double)(j))));
        a=t;
        t=0;
        for(i=b-1,j=0;i>=0;--i,++j)
        t+=(arr2[i]-48)*((long long int)(pow(2.0,(double)(j))));
        b=t;
        /*if(a>b)
        printf("Yes\n");
        else
        printf("No\n");
        */
        t=gcd(a,b);
        if(t!=1)
        printf("Pair #%lld: All you need is love!\n",z);
        else
        printf("Pair #%lld: Love is not all you need!\n",z);
    }
    return 0;
}
