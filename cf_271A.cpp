#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include <string>

using namespace std;


int main()
{
    int year;
    cin>>year;
    for(int i=year;; i++)
    {
        year++;
         stringstream ss;
         ss << year;
         string str = ss.str();
        if(str[0]!=str[1]&&str[0]!=str[2]&&str[1]!=str[2]&&str[2]!=str[3]&&str[3]!=str[0]&&str[3]!=str[1])
        {
            cout<<str;
            break;
        }
    }
    return 0;
}

