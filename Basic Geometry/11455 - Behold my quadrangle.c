#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}

int main()
{
    int arr[4],n,i,j;
    scanf("%d",&n);
    for(j=0;j<n;++j)
    {
    for(i=0;i<4;++i)
    scanf("%d",&arr[i]);
    qsort(arr,4,sizeof(int),cmpfunc);
    if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[3]==arr[2])
    printf("square\n");
    else if(arr[0]==arr[1]&&arr[3]==arr[2])
    printf("rectangle\n");
    else if(arr[0]+arr[1]+arr[2]>arr[3])
    printf("quadrangle\n");
    else
    printf("banana\n");
    }
    return 0;
}
