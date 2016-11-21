#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
using namespace std;


int main()
{
    int number;
    //cin>>number;
    string s1;
    cin>>s1;
    sort(s1.begin(),s1.end());
    int count =1 ;
    for(int i = 1;i < s1.length() ; i++ )
    {
        if(s1[i]!=s1[i-1])
        count  ++ ;
    }
    if(count%2==1)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    cout<<"IGNORE HIM!";
    return 0;
}

