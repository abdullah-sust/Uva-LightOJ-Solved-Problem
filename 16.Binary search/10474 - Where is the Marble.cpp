#include"bits/stdc++.h"
using namespace std;
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main()
{
    int n,q,i,arr[10000],j,k,p,cas=0;
    while(scanf("%d %d",&n,&q)==2)
    {
        if(n==0&&q==0)
        break;
        for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
        qsort(arr,n,sizeof(int),cmpfunc);
        printf("CASE# %d:\n",++cas);
        for(j=0;j<q;++j)
        {
            p=-1;
            scanf("%d",&k);
            for(i=0;i<n;++i)
            {
                if(arr[i]==k)
                {
                    p=i;
                    break;
                }
            }
            if(p==-1)
            printf("%d not found\n",k);
            else
            printf("%d found at %d\n",k,i+1);
        }
    }
    return 0;
}
