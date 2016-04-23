#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
    if(a%b==0)
    return b;
    gcd(b,a%b);
}
int main()
{
    int cnt,cas,i,j,k,arr[500];
    double b,n,m;
    while(scanf("%d",&cas)==1)
    {
       if(cas==0)
       break;
       for(i=0;i<cas;++i)
       scanf("%d",&arr[i]);
       n=(cas*(cas-1))/2;
       m=0;
       for(i=0;i<cas-1;++i)
       for(j=i+1;j<cas;++j)
       {
           k=gcd(arr[i],arr[j]);
           if(k==1)
           ++m;
       }
       //printf("%d\n\n",m);
       if(m==0)
       {
           printf("No estimate for this data set.\n");
           continue;
       }

       b=pow(((n*6)/m),0.5);
       printf("%.6lf\n",b);
    }
    return 0;
}
