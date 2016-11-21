#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    int number;
    cin>>number;
    int count=0;
    int n_count=0;
    for(int i=0;i<number;i++)
    {
        cin>>str;
        if(str[1]=='+')
        {
            count++;
        }
        if( str[1]=='-')
        {
            count--;
        }
    }
    cout<<count;
       return 0;

}
