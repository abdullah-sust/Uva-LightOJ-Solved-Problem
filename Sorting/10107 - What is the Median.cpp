#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10000],i;
    i=-1;
    while(scanf("%d",&arr[++i])==1)
    {
        sort(arr,arr+i+1);
        if(i==0)
            printf("%d\n",arr[i]);
        else if(i==1)
            printf("%d\n",(arr[i]+arr[0])/2);
        else if(i==2)
            printf("%d\n",arr[i-1]);
        else if(i==3)
            printf("%d\n",(arr[i-2]+arr[i-1])/2);
        else if(i%2==0)
            printf("%d\n",arr[i/2]);
        else
            printf("%d\n",(arr[i/2+1]+arr[i/2])/2);
    }
    return 0;
}
