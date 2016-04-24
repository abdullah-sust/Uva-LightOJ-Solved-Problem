#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
#define s scanf
#define p printf
bool taken[31];
vector <char> result;
int n,m;
char arr[31];
void func(void)
{
    int i;
    if(result.size()==m)
    {
        for(i=0;i<m;++i)
        p("%c",result[i]);
        p("\n");
    }
    else
    {
        for(i=0;i<n;++i)
        {
            if(!result.empty()&&result[result.size()-1]>arr[i])
            continue;
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
    while(s("%s %d",&arr,&m)!=EOF)
    {
        result.clear();
        n=strlen(arr);
        sort(arr,arr+n);
        memset(taken,0,sizeof(taken));
        func();
    }
    return 0;
}
