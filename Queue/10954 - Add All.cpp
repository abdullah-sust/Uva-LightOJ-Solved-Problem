#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int>q;
int arr[100000];
int main()
{
    int i,j,n,cost,c;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        for(i=0;i<n;++i)
        {
            scanf("%d",&arr[i]);
            q.push(-arr[i]);
        }
        cost=0;

        //for(k=0;k<n-1;++k)
        while(!q.empty())
        {
            n=q.size();
            if(n==2)
            {
                i=-q.top();
            q.pop();
            j=-q.top();
            q.pop();
            cost+=i+j;
            break;
            }
            i=-q.top();
            q.pop();
            j=-q.top();
            q.pop();
            c=i+j;
            cost+=c;
            q.push(-c);

        }
        printf("%d\n",cost);
    }
    return 0;
}
