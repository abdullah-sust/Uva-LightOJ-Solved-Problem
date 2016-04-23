#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long int num,a,b,c,d,diffe,i,j,arr[10000],mid,beg,end,item,money;
    while(scanf("%lld",&num)==1)
    {
        for(i=0;i<num;++i)
        scanf("%lld",&arr[i]);
         sort(arr,arr+num);
         scanf("%lld",&money);
         getchar();
         getchar();
         diffe=10000000;
         c=10000000;
         d=10000000;
         for(i=0;i<num-1;++i)
         {
             //a=arr[i];
             item=money-arr[i];
             end=num-1;
             beg=i+1;
             mid=(beg+end)/2;
             while((beg<=end)&&(item!=arr[mid]))
             {

                 if(arr[mid]>item)
                 end=mid-1;
                 else
                 beg=mid+1;
                 mid=(beg+end)/2;
                 //printf("al ");
             }
             //printf("awal ");
             if((arr[mid])==item)
             {
                // printf("aaaa ");
                b=item;
                a=arr[i];
                if((b-a)<diffe)
                {
                    diffe=b-a;
                    //printf("abc ");
                    c=a;
                    d=b;
                }
             }
         }
         if((c+d)==money)
         printf("Peter should buy books whose prices are %lld and %lld.\n\n",c,d);
    }
    return 0;
}
