#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    string str1,str2;
    cin>>str1;
    int count=0,count1=0;
     str2="";
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i]=='4'|| str1[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}

