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
    cin>>str2;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[i])
        {
            cout<<"0";
        }
        else
        cout<<"1";
    }
    return 0;
}

