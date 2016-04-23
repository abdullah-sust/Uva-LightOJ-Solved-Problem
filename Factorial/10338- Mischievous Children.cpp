#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{

    long long int a,arr1[20],i,j,num,p,fac[20];
    int cas,ch;
    fac[0]=1;
    fac[1]=2;
    fac[2]=6;
    fac[3]=24;
    fac[4]=120;
    fac[5]=720;
    fac[6]=5040;
    fac[7]=40320;
    fac[8]=362880;
    fac[9]=3628800;
    fac[10]=39916800;
    fac[11]=479001600;
    fac[12]=6227020800;
    fac[13]=87178291200;
    fac[14]=1307674368000;
    fac[15]=20922789888000;
    fac[16]=355687428096000;
    fac[17]=6402373705728000;
    fac[18]=121645100408832000;
    fac[19]=2432902008176640000;
    char arr[20],c;
    scanf("%d",&cas);
    for(ch=1;ch<=cas;++ch)
    {
        scanf("%s",arr);
        a=strlen(arr);
        sort(arr,arr+a);
        //printf("%s\n",arr);
        memset(arr1,0,sizeof(arr1));
        j=-1;
        for(i=0;i<a;++i)
        {
            ++j;
            p=0;
            c=arr[i];
            while((arr[i]==c)&&i<a)
            {
                ++arr1[j];
                ++i;
                p=1;
            }
            if(p==1)
            --i;
        }
        num=fac[a-1];
        for(i=0;i<=j;++i)
        num/=fac[arr1[i]-1];
        printf("Data set %d: %lld\n",ch,num);
    }
    return 0;
}
