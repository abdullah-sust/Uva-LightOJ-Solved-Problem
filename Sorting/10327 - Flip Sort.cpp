#include<cstdio>
using namespace std;
int main()
{
    int a,n,num[1000],i,j,temp;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;++i)
        scanf("%d",&num[i]);
        a=0;
        for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
        if(num[i]>num[j])
            ++a;
        printf("Minimum exchange operations : %d\n",a);
    }
    return 0;
}
