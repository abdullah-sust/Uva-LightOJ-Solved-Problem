#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str1[20000],str2[200000];
    int a,b,i,j,m,n;
    while(scanf("%s %s",str1,str2)==2)
    {
        a=strlen(str1);
        b=strlen(str2);
        j=0;
        for(i=0;i<b;++i)
        {
            if(str1[j]==str2[i])
            ++j;
        }
        if(j==a)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
