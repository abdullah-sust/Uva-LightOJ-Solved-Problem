#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
#define s scanf
#define p printf
vector <char>result;
char arr[11];
bool taken[11];
int n;
void func(void)
{
    int i;
    if(result.size()==n)
    {
        for(i=0;i<n;++i)
        p("%c",result[i]);
        p("\n");
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if(taken[i]==0)
            {
                taken[i]=1;
                result.push_back(arr[i]);
                func();
                result.pop_back();
                taken[i]=0;
                while(arr[i]==arr[i+1])
                ++i;
            }
        }
    }
}
int main()
{
    int c;
    s("%d",&c);
    while(c--)
    {
        s("%s",arr);
        n=strlen(arr);
        sort(arr,arr+n);
        result.clear();
        memset(taken,0,sizeof(taken));
        func();
        p("\n");
    }
    return 0;
}
