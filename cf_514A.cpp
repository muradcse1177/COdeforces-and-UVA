#include <set>
#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    cin >>s;
    for(int i=0;i<s.length();i++)
    {
        if(!(s[0]=='9'&&i==0)&&s[i]>='5')
        {
            s[i]='9'-s[i]+'0';
        }
    }
    cout<<s;
}
