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
int v,e,par[410],coun,expensive;
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
    int i,a,b,c;
    while(s("%d %d",&v,&e)==2)
    {
        if(v==0&&e==0)
        break;
        for(i=0;i<=v;++i)
        par[i]=i;
        m1.clear();
        m2.clear();
        vec.clear();
        coun=0;
        for(i=1;i<=v;++i)
        {
            cin>>str;
            m1[str] = i;
            m2[i]=str;
        }
        for(i=0;i<e;++i)
        {
            cin>>s1>>s2;
            a=m1[s1];
            b=m1[s2];
            cin>>c;
            temp.start=a;
            temp.end=b;
            temp.cost=c;
            vec.push_back(temp);
        }
        cin>>str;
        sort(vec.begin(),vec.end(),abdullah);
        mst();
        if(coun==v-1)
        p("%d\n",expensive);
        else
        p("Impossible\n");
    }
    return 0;
}
