#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
#define s scanf
#define p printf
vector <char>res;
char arr[20];
bool taken[20];
int a;
void func (void)
{
    int i;
    if(res.size()==a)
    {
        for(i=0;i<a;++i)
        p("%c",res[i]);
        p("\n");
    }
    else
    {
        for(i=0;i<a;++i)
        {
            if(taken[i]==0)
            {
                taken[i]=1;
                res.push_back(arr[i]);
                func();
                taken[i]=0;
                res.pop_back();
                while(arr[i]==arr[i+1])
                ++i;
            }
        }
    }

}

int main()
{
    int t,m,n,i,j;
    s("%d",&t);
    //getchar();
    //getchar();
    for(j=0;j<t;++j)
    {
        memset(taken,0,sizeof(taken));
        res.clear();
        s("%d %d",&a,&n);
        m=a-n;
        for(i=0;i<m;++i)
        arr[i]='0';
        for(i=i;i<a;++i)
        arr[i]='1';
        arr[i]='\0';
        if(j>0)
        p("\n");
        func();

    }
    return 0;
}
