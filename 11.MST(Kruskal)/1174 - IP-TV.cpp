#include<cstdio>
#include<vector>
#include<iostream>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;
#define s scanf
#define p printf
map <string,int> m1;
map <int,string> m2;

string str,s1,s2;
int v,e,par[2002],coun,expensive;
typedef struct
{
    int start,end,cost;
}edge;
edge temp;
vector<edge> vec;
bool abdullah(edge a,edge b)
{
    return a.cost<b.cost;
}
int  find_par(int i)
{
    if(par[i]==i)
    return i;
    return par[i]=find_par(par[i]);
}
void mst(void)
{
    expensive=0;
    int i,p,q;
    coun=0;
    for(i=0;i<(int)vec.size();++i)
    {
        p=find_par(vec[i].start);
        q=find_par(vec[i].end);
        if(p!=q)
        {
            par[p]=q;
            expensive+=vec[i].cost;
            ++coun;
            if(coun==v-1)
            break;
        }
    }
}
int main()
{
    int i,a,b,c,cas,z=0;;
    s("%d",&cas);
    while(cas--)
    {
        if(++z>1)
        p("\n");
        s("%d %d",&v,&e);
        for(i=0;i<=v;++i)
        par[i]=i;
        m1.clear();
        m2.clear();
        vec.clear();
        coun=0;
        int m=0;
        for(i=0;i<e;++i)
        {
            cin>>s1>>s2;
            if(m1.find(s1)==m1.end())
            {
                a=m1[s1]=++m;
            }
            else
            a=m1[s1];
            if(m1.find(s2)==m1.end())
            {
                b=m1[s2]=++m;
            }
            else
            b=m1[s2];
            cin>>c;
            temp.start=a;
            temp.end=b;
            temp.cost=c;
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end(),abdullah);
        mst();
        p("%d\n",expensive);
    }
    return 0;
}
