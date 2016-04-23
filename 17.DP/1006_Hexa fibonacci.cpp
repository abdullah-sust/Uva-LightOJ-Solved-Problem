//Longest_common_subsequence
#include<cstdio>
#include<cctype>
#include<string>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
long long int a, b, c, d, e, f;
long long int visit[10010];
long long int fn( long long int n)
{
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(visit[n]!=-1)
        return visit[n];
    else
    {
        visit[n]=(fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) )%10000007;
        return visit[n];
    }
}
int main()
{
    long long int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        memset(visit,-1,sizeof(visit));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
