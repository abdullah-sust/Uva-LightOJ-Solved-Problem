//10300
#include <cstdio>
using namespace std;
#define s scanf
#define p printf
int arr[10];
int inc()
{
    for(int i=0;i<9;++i)
        for(int j=i+1;j<10;++j)
        {
            if(arr[i]>arr[j])
                return false;
        }
    return true;
}

int dec()
{
    int t;
    for(int i=0;i<9;++i)
        for(int j=i+1;j<10;++j)
        {
            if(arr[i]<arr[j])
                return false;
        }
    return true;
}
int main()
{
    int i,t,ans;
    s("%lld",&t);
    p("Lumberjacks:\n");
    while(t--)
    {
        for(i=0;i<10;++i)
            s("%d",&arr[i]);
        //p("%lld\n",sum);
        if(arr[0]>arr[9])
        {
            ans=dec();
            if(ans==true)
            {
                p("Ordered\n");
                continue;
            }
        }
        else if(arr[0]<arr[9])
        {
            ans=inc();
            if(ans==true)
            {
                p("Ordered\n");
                continue;
            }
        }
        if(ans==false)
        p("Unordered\n");
    }
    return 0;
}
