#include<stdlib.h>
#include<stdio.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)a-*(int *)b);
}
int main()
{
    int a,age[100],i;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
        break;
        for(i=0;i<a;i++)
        scanf("%d",&age[i]);
        qsort(age,a,sizeof(int),cmpfunc);
        for(i=0;i<a-1;i++)
        printf("%d ",age[i]);
        printf("%d",age[i]);
        printf("\n");
    }
    return 0;
}
