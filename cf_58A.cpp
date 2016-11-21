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
    string str2="hello";
    int count=0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == str2[count])
        {
            count++;
        }
    }

    if(count==5)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
