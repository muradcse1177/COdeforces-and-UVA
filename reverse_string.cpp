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
    char str[100];
    int i,j=0;
    char temp;
    gets(str);
    i=0;
    j=strlength(str)-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str;
   return 0;
}

