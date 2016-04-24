//uva 612
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>
using namespace std;
#define s scanf
#define p printf
typedef struct
{
    int inversion;
    //char STR[52];
    char str[52];
}t;
t arr[101];

bool awal (t a,t b)
{
    //if(a.inversion==b.inversion)
    //return (a.inversion < b.inversion);
    return (a.inversion < b.inversion);
}

int main()
{
    int v,n,m,i,j,k,z,pr;;
    s("%d",&v);
    //getchar();
    //getchar();
    for(pr=1;pr<=v;++pr)
    {
        s("%d %d ",&n,&m);
        //getchar();

        //getchar();

        for(i=0;i<m;++i)
        {
            scanf("%s",arr[i].str);
            //strcpy(arr[i].STR,arr[i].str);
            z=0;
            for(j=0;j<strlen(arr[i].str)-1;++j)
            for(k=j+1;k<strlen(arr[i].str);++k)
            if(arr[i].str[j]>arr[i].str[k])
            {
                ++z;
                //swap(arr[i].str[j],arr[i].str[k]);
            }
            arr[i].inversion=z;
        }
        stable_sort(arr,arr+m,awal);
        if(pr>1)
        p("\n");
        for(i=0;i<m;++i)
        p("%s\n",arr[i].str);
    }
return 0;
}
/*

*/
