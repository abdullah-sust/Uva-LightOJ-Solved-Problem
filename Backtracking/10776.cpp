//uva 10776
#include<cstdio>
#include<vector>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
vector <char> result;
bool taken[30];
char arr[30];
int n,l,pos=-1;
void recur();
int main()
{
    while(scanf("%s %d",&arr,&l)==2)
    {
        n=strlen(arr);
        sort(arr,arr+n);

        // memset(arr,0,sizeof(arr));
        memset(taken,false,sizeof(taken));
        pos=-1;

        recur();

        result.clear();
    }
    //cout<<"-"<<endl;
    return 0;
}

void recur()
{
    if(result.size()==l)
    {
        for(int i=0;i<l;++i)
        cout<<result[i];
        cout<<"\n";
        return;
    }
    for(int i=0;i<n;++i)
    {
        if(pos!=-1 && result[pos]>arr[i])
        continue;
        if(taken[i]==false)
        {
            ++pos;
            taken[i]=true;
            result.push_back(arr[i]);

            recur();

            pos--;
            taken[i]=false;
            result.pop_back();

            while(arr[i]==arr[i+1] && (i+1)<n)
            ++i;

        }

    }
}
