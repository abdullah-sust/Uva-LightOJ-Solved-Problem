#include<stdio.h>
#include<stdlib.h>
typedef struct {
int year,mnth,date;
char name[15];
}cal;

int comp(const void *a, const void *b)
{
        cal *c = (cal *)a;
        cal *d = (cal* )b;
        if(c->year != d->year)
        return (c->year - d->year);
        else if(c->mnth != d->mnth)
        return(c->mnth - d->mnth);
        else
        return (c->date-d->date);
}
cal record[100];
int main()
{

    int t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=0;i<t;i++)
        scanf("%s %d %d %d",record[i].name,&record[i].date,&record[i].mnth ,&record[i].year);
        qsort(record,t,sizeof(cal),comp);
        printf("%s\n%s\n",record[t-1].name,record[0].name);
    }
    return 0;
}
