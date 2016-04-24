//uva_11321
//uva -11321

#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<utility>
using namespace std;

int M,a;
typedef struct
{
    int b;
    int mo;
}type;

type  arr[10002];

bool comp(type  x,type y)
{
    if(x.mo!=y.mo)
    return (x.mo<y.mo);
    if(((x.b%2==1)||(x.b%2==-1))&&((y.b%2==-1)||(y.b%2==1)))
    return x.b>y.b;
    if((x.b%2==0)&&(y.b%2==0))
    return x.b<y.b;

    return ((x.b%2==1)||(x.b%2==-1));

    //return 0;
}

int main()
{
    int i;
    while(scanf("%d %d",&a,&M)==2)
    {

        if(a==0&&M==0)
        {
            printf("%d %d\n",a,M);
            break;
        }

        for(i=0;i<a;++i)
        {
            scanf("%d",&arr[i].b);

            //if(arr[i].b<0)
            arr[i].mo=(arr[i].b%M);
            //else
            //arr[i].mo=arr[i].b%M;
            //arr[i].mo=(arr[i].b%M);
        }
        sort(arr,arr+a,comp);

        printf("%d %d\n",a,M);

        for(i=0;i<a;++i)
        printf("%d\n",arr[i].b);
    }
    return 0;
}
/*
Input
15 3
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
4 2
-2000000000
-2000000001
2000000000
2000000001
9 2
-15509
-13005
-4058
-11173
-10564
16391
-1396
-12098
-15847
    3 3
    9
    12
    10

    15 3
    -1
    -2
    -3
    -4
    -5
    6
    7
    8
    9
    -10
    -11
    -12
    -13
    14
    15

    0 0
Output
15 3
15 9 3 6 12 13 7 1 4 10 11 5 2 8 14
4 2
-2000000001
-2000000000
2000000000
2000000001
    3 3
    9
    12
    10
    15 3
    -5
    -11
    -2
    -1
    -13
    -10
    -4
    15
    9
    -3
    -12
    6
    7
    8
    14
    0 0
*/
