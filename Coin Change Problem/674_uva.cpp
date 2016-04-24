//coin change.....
#include<iostream>
#include<cstring>
using namespace std;
int coin[]={1,5,10,25,50};
int mat[6][7490],make;
int call(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(mat[i][amount]!=-1)
        return mat[i][amount];
    int r1=0,r2=0;
    if((amount-coin[i])>=0)
        r1=call(i,amount-coin[i]);
    r2=call(i+1,amount);

    return mat[i][amount]=r1+r2;
}

int main()
{
    memset(mat,-1,sizeof(mat));
    while(cin>>make)
    cout<<call(0,make)<<endl;
    return 0;
}
