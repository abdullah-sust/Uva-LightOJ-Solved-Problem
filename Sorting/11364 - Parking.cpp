#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int cas,i,arr[20],car,dis;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&car);
        for(i=0;i<car;++i)
        scanf("%d",&arr[i]);
        sort(arr,arr+car);
        dis=0;
        for(i=1;i<car;++i)
        dis+=arr[i]-arr[i-1];
        dis+=(arr[car-1]-arr[0]);
        printf("%d\n",dis);
    }
    return 0;
}
