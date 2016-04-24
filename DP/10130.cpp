#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int n,cap,dp[1002][102],weight[1002],cost[1002];
int call(int i,int w)
{
    if(i==n+1)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
        int profit1,profit2;
        if(w+weight[i]<=cap)
            profit1=cost[i]+call(i+1,w+weight[i]);
        else
            profit1=0;
        profit2=call(i+1,w);
        dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t,ans,person,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;++i)
        {
            cin>>cost[i]>>weight[i];
        }
        ans=0;
        cin>>person;
        while(person--)
        {
            cin>>cap;
            memset(dp,-1,sizeof(dp));
            ans+=call(1,0);
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*
Sample Input

2

3

72 17

44 23

31 24

1

26

6

64 26

85 22

52 4

99 18

39 13

54 9

4

23

20

20

26


Output for the Sample Input

72

514
*/
