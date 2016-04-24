#include "bits/stdc++.h"
using namespace std;
int main ()
{
    int i,j,n,z,len,temp;
    char arr[100][100],ch,num[26],m,letter[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    scanf("%d",&n);
    getchar();
    for(i=0;i<26;++i)
    num[i]=0;
    for(z=0;z<n;++z)
    {
        gets(arr[z]);
    }
    for(z=0;z<n;++z)
    {
        len=strlen(arr[z]);
        for(i=0;i<len;++i)
        {
            if(toupper(arr[z][i])=='A')
            ++num[0];
            else if(toupper(arr[z][i])=='B')
            ++num[1];
            else if(toupper(arr[z][i])=='C')
            ++num[2];
            else if(toupper(arr[z][i])=='D')
            ++num[3];
            else if(toupper(arr[z][i])=='E')
            ++num[4];
            else if(toupper(arr[z][i])=='F')
            ++num[5];
            else if(toupper(arr[z][i])=='G')
            ++num[6];
            else if(toupper(arr[z][i])=='H')
            ++num[7];
            else if(toupper(arr[z][i])=='I')
            ++num[8];
            else if(toupper(arr[z][i])=='J')
            ++num[9];
            else if(toupper(arr[z][i])=='K')
            ++num[10];
            else if(toupper(arr[z][i])=='L')
            ++num[11];
            else if(toupper(arr[z][i])=='M')
            ++num[12];
            else if(toupper(arr[z][i])=='N')
            ++num[13];
            else if(toupper(arr[z][i])=='O')
            ++num[14];
            else if(toupper(arr[z][i])=='P')
            ++num[15];
            else if(toupper(arr[z][i])=='Q')
            ++num[16];
            else if(toupper(arr[z][i])=='R')
            ++num[17];
            else if(toupper(arr[z][i])=='S')
            ++num[18];
            else if(toupper(arr[z][i])=='T')
            ++num[19];
            else if(toupper(arr[z][i])=='U')
            ++num[20];
            else if(toupper(arr[z][i])=='V')
            ++num[21];
            else if(toupper(arr[z][i])=='W')
            ++num[22];
            else if(toupper(arr[z][i])=='X')
            ++num[23];
            else if(toupper(arr[z][i])=='Y')
            ++num[24];
            else if(toupper(arr[z][i])=='Z')
            ++num[25];
            else
            ;
        }
    }
    for(i=0;i<25;++i)
    for(j=i+1;j<26;++j)
    {
        if(num[i]<num[j])
    {
        temp=num[i];
        num[i]=num[j];
        num[j]=temp;
        ch=letter[i];
        letter[i]=letter[j];
        letter[j]=ch;
    }
    else if(num[i]==num[j])
    {
        if(letter[i]>letter[j])
        {
            ch=letter[i];
            letter[i]=letter[j];
            letter[j]=ch;
        }
    }
    }

    for(i=0;i<26;++i)
    {
        if(num[i]==0)
        ;
        else
        printf("%c %d\n",letter[i],num[i]);
    }
    return 0;
}
