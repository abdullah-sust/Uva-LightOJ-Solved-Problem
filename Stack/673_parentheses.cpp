#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<stack>
using namespace std;
int main()
{
    int a,i,t;
    string arr;
    scanf("%d",&a);
    getchar();

    while(a--)
    {
        stack <char> stk;
        //if(stk.empty()==1)
        //printf("awal\n");
        getline(cin,arr);

        if(arr.compare("\n")==0)
        {
            printf("Yes\n");
            continue;
        }
        if(arr.size()%2==1||arr.size()==1)
        {
            printf("No\n");
            continue;
        }

        int t=0;
        for(i=0;i<arr.size();++i)
        {
            if(arr[i]=='('||arr[i]=='[')
             stk.push(arr[i]);
            else if(arr[i]==')'&&!stk.empty()&&stk.top()=='(')
             stk.pop();
            else if(arr[i]==']'&&!stk.empty()&&stk.top()=='[')
             stk.pop();
            else
             t=1;
        }
        if(stk.empty()&&(t==0))
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
