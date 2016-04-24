#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
        break;
        if(a>=b&&a>=c)
        {
            x=a;
            if(b>=c)
            {
                y=b;
                z=c;
            }
            else
            {
                y=c;
                z=b;
            }
        }
        else if(b>=a&&b>=c)
        {
            x=b;
            if(a>=c)
            {
                y=a;
                z=c;
            }
            else
            {
                y=c;
                z=a;
            }
        }
        else
        {
            x=c;
            if(a>=b)
            {
                y=a;
                z=b;
            }
            else
            {
                y=b;
                z=a;
            }
        }
        if(x*x==(y*y+z*z))
        printf("right\n");
        else
        printf("wrong\n");
    }
    return 0;

}

