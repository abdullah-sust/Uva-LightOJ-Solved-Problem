#include<cstdio>
using namespace std;
int main()
{
    int a,n,c,i;
    while(scanf("%d",&n)==1)
    {
        i=1;
        c=1;
        while(i)
        {
            i=i*10+1;
            i=i%n;
            ++c;
        }
        printf("%d\n",c);
    }
    return 0;
}
