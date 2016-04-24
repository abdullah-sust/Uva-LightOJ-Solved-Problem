#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}

int main()
{
    int n,i,j,k,num[3005],arr[3005],sum,p,d;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;++i)
        scanf("%d",&num[i]);
        sum=0;
        k=j;
        p=1;
        for(i=0,j=0;i<n-1;++i,++j)
        {
            if(num[i]>num[i+1])
            {
                d=num[i]-num[i+1];
                arr[j]=d;
            }

            else
            {
                d=num[i+1]-num[i];
                arr[j]=d;
            }
        }
        qsort(arr,n-1,sizeof(int),cmpfunc);
        p=1;
        for(i=0;i<n-1;++i)
        {
            if(arr[i]==(i+1))
            ;
            else
            {
                p=0;
                break;
            }
        }
        if(p==1)
        printf("Jolly\n");
        else
        printf("Not jolly\n");
    }
    return 0;
}
