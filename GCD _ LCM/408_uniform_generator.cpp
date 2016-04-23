#include<cstdio>
#include<cstring>
using namespace std;
int gcd (int a, int b)
{
    if(a%b==0)
    return b;
    gcd(b,a%b);
}
int main()
{
    int a,b,n;
    while(scanf("%d",&a)==1)
    {
        scanf("%d",&b);
        n=gcd(a,b);
        if(n!=1)
        printf("%10d%10d    Bad Choice\n\n",a,b);
        else
        printf("%10d%10d    Good Choice\n\n",a,b);
    }
    return 0;
}
