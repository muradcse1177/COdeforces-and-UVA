#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;


int main()
{
    string str1;
    cin>>str1;
    if(str1[0]>='a'&& str1[0]<='z')
    {
        str1[0]=str1[0]-32;
        cout<<str1;
    }
    else
    cout<<str1;

    return 0;
}


