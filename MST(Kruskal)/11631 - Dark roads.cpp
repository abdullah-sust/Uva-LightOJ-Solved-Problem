#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define s scanf
#define p printf
typedef struct
{
    int a,b,c;
}edge;
vector<edge>v;
edge temp;
int par[200010],need,V,e;
bool abdullah(edge a,edge b)
{
    return a.c<b.c;
}
int find_par(int i)
{
    if(par[i]==i)
    return i;
    return par[i]=find_par(par[i]);
}
void mst(void)
{
    int i,p,q,count=0;
    for(i=0;i<(int)v.size();++i)
    {
        p=find_par(v[i].a);
        q=find_par(v[i].b);
        if(p!=q)
        {
            ++count;
            par[p]=q;
            need+=v[i].c;
            if(count==V-1)
            break;
        }
    }
    return;
}
int main()
{
    int i,x,y,z,cost;
    while(s("%d %d",&V,&e)==2)
    {
        if(V==0&&e==0)
        break;
        cost=0;
        need=0;
        for(int i=0;i<=V;++i)
        par[i]=i;
        for(i=0;i<e;++i)
        {
            s("%d %d %d",&x,&y,&z);
            cost+=z;
            temp.a=x;
            temp.b=y;
            temp.c=z;
            v.push_back(temp);
        }
        sort(v.begin(),v.end(),abdullah);
        mst();
        p("%d\n",cost-need);
        v.clear();
    }
    return 0;
}

