#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
long long int  prime[10000000][2];
bool arr[18409202];
int main ()
{
    long long int num,v,a,p,x,y;
    memset(arr,0,sizeof(arr));
    long long int  cnt,i,j,k,baki;
    cnt=-1;
    i=3;
    k=i+i;
            for(j=i*i;j<=18409201;j+=k)
            arr[j]=1;
    x=3;
        for(i=5;i<=18409201;i+=2)
        if(arr[i]==0)
        {
            y=i;
            if((y-x)==2)
            {
                ++cnt;
                prime[cnt][0]=x;
                prime[cnt][1]=y;
            }
            x=i;
            k=i+i;
            for(j=i*i;j<=18409201;j+=k)
            arr[j]=1;
        }
        while(scanf("%lld",&num)==1)
        printf("(%lld, %lld)\n",prime[num-1][0],prime[num-1][1]);
        return 0;
}
