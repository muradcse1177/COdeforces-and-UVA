#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
    int number;
    cin>>number;
    string str;
    cin>>str;
    int count=0,count1=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A')
        {
            count++;
        }
        if(str[i]=='D')
        {
            count1++;
        }

    }
    if(count>count1)
    {
        cout<<"Anton";
    }

    if(count<count1)
    {
        cout<<"Danik";
    }
    if(count==count1)
    {
        cout<<"Friendship";
    }


    return 0;
}


