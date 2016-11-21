#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int strlength(char a[])
{
    int count=0;
    char i;
    for(i=0;a[i]!='\0';i++)
    {
       count++;
    }
    return count;
}

int main()
{
    char str1[110],str2[110];
    int i,j=0;
    char temp;
    gets(str1);
    gets(str2);
    i=0;
    j=strlength(str1)-1;
    while(i<j)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
    }
    if (strcmp(str1,str2) == 0)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
   return 0;
}



