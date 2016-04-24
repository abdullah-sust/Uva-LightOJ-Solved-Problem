#include<stdio.h>
int main()
{
    int arr[100],test,L,i,j,temp,swap,a,b,c;
    scanf("%d",&test);
    for(a=0;a<test;++a)
    {
        swap=0;
        scanf("%d",&L);
        for(c=0;c<L;++c)
        scanf("%d",&arr[c]);
        for(i=0;i<L-1;++i)
        for(j=i+1;j<L;++j)
        if(arr[i]>arr[j])
        {
            ++swap;
            b=arr[i];
            arr[i]=arr[j];
            arr[j]=b;
        }
        printf("Optimal train swapping takes %d swaps.\n",swap);
    }
    return 0;
}
