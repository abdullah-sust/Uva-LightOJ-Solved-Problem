#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    int i,k,j,a,hulu,sum,bulu,leap,newline=0;
    while(scanf("%s",arr)==1)
    {
        a=strlen(arr);
        if(arr[a-1]=='0'&&arr[a-2]=='0')
        {
            leap=0;
            sum =0;
            for(i=0;i<a;++i)
                sum=((arr[i]-48)+sum*10)%400;
                if(sum==0)
                leap=1;
        }
        else
        {
            leap=0;
            sum =0;
            for(i=0;i<a;++i)
                sum=((arr[i]-48)+sum*10)%4;
                if(sum==0)
                leap=1;
        }
        hulu=0;
            sum =0;
            for(i=0;i<a;++i)
                sum=((arr[i]-48)+sum*10)%15;
                if(sum==0)
                hulu=1;
        bulu=0;
            sum =0;
            for(i=0;i<a;++i)
                sum=((arr[i]-48)+sum*10)%55;
                if(sum==0)
                bulu=1;
                k=0;
                if(newline)
                printf("\n");
                newline++;
                if(leap==1)
                {
                    printf("This is leap year.\n");
                    k=1;
                }
                if(hulu==1)
                {
                    printf("This is huluculu festival year.\n");
                    k=1;
                }
                if(bulu==1 &&  leap==1)
                {

                    printf("This is bulukulu festival year.\n");
                    k=1;
                }
                if(k==0)
                printf("This is an ordinary year.\n");

    }
    return 0;
}
