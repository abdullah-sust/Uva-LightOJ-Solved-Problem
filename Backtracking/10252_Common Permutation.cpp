#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d,i,j,k;
    char arr1[1001],arr2[1001];
    while(gets(arr1))
    {
        gets(arr2);
        string output = "";
        a=strlen(arr1);
        b=strlen(arr2);
        //printf("aaa\n");
        for(i=0;i<a;++i)
            for(j=0;j<b;++j)
            if(arr1[i]==arr2[j])
            {
                //printf("bbb\n");
                output+=arr1[i];
                arr1[i]='*';
                arr2[j]='&';
            }
            //printf("ccc\n");
            sort(output.begin(),output.end());
            cout << output << endl;
    }
    return 0;
}
