#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,i,prime;
    char letter[20];
    while(scanf("%s",letter)==1)
    {
        if(letter[0]=='0'&&letter[1]=='\0')
        break;
        b=0;
        a=strlen(letter);
        for(i=0;i<a;++i)
        {
            if(letter[i]>='a'&&letter[i]<='z')
            b+=(letter[i]-96);
            else
            b+=(letter[i]-38);
        }
        prime=1;
        for(i=2;i<=b/2;++i)
        {
            if(b%i==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==0)
        printf("It is not a prime word.\n");
        else
        printf("It is a prime word.\n");

    }
    return 0;

}
