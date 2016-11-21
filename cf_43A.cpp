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
    cin>>number;
    string str1,str2;
    int count=0;
    int count1=0;
    cin>>str1;
    count=count+1;
    number=number-1;
    while(number--)
    {
        string str;
        cin>>str;
        if(str!=str1)
        {
            str2=str;
            count1++;
        }
        else
            count++;
    }
    if(count>count1)
    cout<<str1;
    else
     cout<<str2;
    return 0;
}

