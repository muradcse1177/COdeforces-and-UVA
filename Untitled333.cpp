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
    cin>>s;
    int count=0;
    for (int i=0; i<s.length(); i++)
    {
        if (isupper(s[i]))
            count++;
    }
    if (count==s.length() || (count==s.length()-1 && islower(s[0])))
    {
        int j=0;
        if (islower(s[0]))
        {
            s[0]=char((int)s[0]-32);
            j=1;
        }
        for (int i=j; i<s.length(); i++)
        {
            s[i]=char((int)s[i]+32);
        }
    }
    cout<<s<<endl;
    return 0;
}
